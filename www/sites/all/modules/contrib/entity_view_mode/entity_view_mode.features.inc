<?php

/**
 * @file
 * Features integration for the entity_view_mode module.
 */

/**
 * Implements hook_features_api().
 */
function entity_view_mode_features_api() {
  return array(
    'entity_view_mode' => array(
      'name' => 'Entity view modes',
      'feature_source' => TRUE,
      // @todo Remove the next two lines when http://drupal.org/node/1900668 is fixed?
      'default_file' => FEATURES_DEFAULTS_CUSTOM,
      'default_filename' => 'entity',
      //'duplicates' => FEATURES_DUPLICATES_CONFLICT,
      'default_hook' => 'entity_view_mode_info',
      'alter_hook' => 'entity_view_mode_info',
      'file' => drupal_get_path('module', 'entity_view_mode') . '/entity_view_mode.features.inc',
    ),
  );
}

/**
 * Implements hook_features_export_options().
 */
function entity_view_mode_features_export_options() {
  $options = array();

  $view_modes = variable_get('entity_view_modes', array());
  foreach ($view_modes as $entity_type => $modes) {
    foreach ($modes as $key => $view_mode) {
      $options[$entity_type . ':' . $key] = $entity_type . ':' . $key;
    }
  }

  return $options;
}

/**
 * Implements hook_features_export().
 */
function entity_view_mode_features_export($data, &$export, $module_name) {
  // Do not add a dependency on features since the exported hook will be
  // included by entity_view_mode no matter if features is enabled or not.
  $export['dependencies']['entity_view_mode'] = 'entity_view_mode';

  $map = features_get_default_map('entity_view_mode');

  foreach ($data as $component) {
    // If another module provides this style, add it as a dependency
    if (isset($map[$component]) && $map[$component] != $module_name) {
      $module = $map[$style];
      $export['dependencies'][$module] = $module;
    }
    elseif (_entity_view_mode_features_component_exists($component)) {
      $export['features']['entity_view_mode'][$component] = $component;
    }
  }

  // No pipe.
  return array();
}

/**
 * Implements hook_features_export_render().
 */
function entity_view_mode_features_export_render($module_name, $data, $export = NULL) {
  $code = array();
  $code[] = "  \$info = array();";
  $code[] = "";

  foreach ($data as $name) {
    if (_entity_view_mode_features_component_exists($name)) {
      list($entity_type, $machine_name) = explode(':', $name);
      $view_mode = entity_view_mode_load($entity_type, $machine_name);
      $view_mode = _entity_view_mode_sanitize($view_mode);

      if (isset($view_mode) && is_array($view_mode)) {
        $code[] = "  \$info['{$entity_type}']['{$machine_name}'] = " . features_var_export($view_mode, '  ') . ";";
        $code[] = "";
      }
    }
  }

  $code[] = "  return \$info;";
  $code = implode("\n", $code);

  // The key is the default hook defined in
  // entity_view_mode_extra_featrues_api().
  return array('entity_view_mode_info' => $code);
}

/**
 * Implements hook_features_revert().
 */
function entity_view_mode_features_revert($module) {
  $view_mode_info = module_invoke($module, 'entity_view_mode_info');
  if (!empty($view_mode_info)) {
    foreach ($view_mode_info as $entity_type => $view_modes) {
      foreach ($view_modes as $machine_name => $view_mode) {
        entity_view_mode_delete($entity_type, $machine_name);
      }
    }
  }
}

/**
 * Helper function to check if view mode with component name exists.
 */
function _entity_view_mode_features_component_exists($component) {
  list($entity_type, $machine_name) = explode(':', $component);

  if (!empty($entity_type) && !empty($machine_name)) {
    return (bool) entity_view_mode_load($entity_type, $machine_name);
  }
  return FALSE;
}
