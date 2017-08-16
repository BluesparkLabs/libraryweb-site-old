<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('UCLALIB Opening Hours'),
  'title' => t("Today's Hours - Master"),
  'description' => t("Today's opening hours for all locations"),
  'edit form'          => 'uclalib_opening_hours_master_ctools_content_types_todays_hours_edit_form',
  'render callback' => 'uclalib_opening_hours_master_ctools_content_types_todays_hours_render',
);

/**
 * Edit form callback.
 */
function uclalib_opening_hours_master_ctools_content_types_todays_hours_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Opening hours table".
 *
 * @param string $subtype
 *   Subtype identifier.
 * @param array  $conf
 *   Configuration of the $subtype instance.
 * @param array  $args
 *   Documentation missing.
 * @param array  $pane_context
 *   Documentation missing.
 * @param array  $incoming_content
 *   Documentation missing.
 *
 * @return object
 *   The content.
 */
function uclalib_opening_hours_master_ctools_content_types_todays_hours_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();
  $block->module = 'uclalib_opening_hours_master';
  $block->delta = $subtype;
  $block->title = 'Today\'s Hours <span class="icon-hours2"></span>';

  $view = views_get_view('todays_hours');
  $view->set_display('default');
  $view->pre_execute();
  $view->execute('default');
  $content = $view->preview('default');

  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $content,
    ),
  );

  // drupal_add_js(drupal_get_path('module', 'uclalib_opening_hours') . '/uclalib_opening_hours_master.js');
  return $block;
}
