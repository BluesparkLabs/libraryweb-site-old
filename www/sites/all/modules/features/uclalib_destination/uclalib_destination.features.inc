<?php
/**
 * @file
 * uclalib_destination.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uclalib_destination_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uclalib_destination_node_info() {
  $items = array(
    'destination' => array(
      'name' => t('Destination'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}