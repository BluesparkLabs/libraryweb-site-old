<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Locations'),
  'title' => t('Linked map image'),
  'description' => t('The location image thumbnail linked to the map pdf file if avail.'),

  'required context' => new ctools_context_required(t('Node'), array('node')),

  'edit form'          => 'uclalib_location_ctools_content_types_linked_map_edit_form',

  'render callback' => 'uclalib_location_ctools_content_types_linked_map_render',
);

/**
 * Edit form callback.
 */
function uclalib_location_ctools_content_types_linked_map_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Linked map".
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
function uclalib_location_ctools_content_types_linked_map_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  if (!isset($pane_context->data)) {
    return;
  }
  $node = $pane_context->data;

  // Generate image tag html.
  $image = field_view_field('node', $node, 'field_location_map_image', 'hours_page');
  $image_html = render($image);

  // If we have location map file, link image to it.
  if (isset($node->field_location_map_file[LANGUAGE_NONE][0]['uri'])) {
    $url = file_create_url($node->field_location_map_file[LANGUAGE_NONE][0]['uri']);
    $output = l($image_html, $url, array('absolute' => TRUE, 'html' => TRUE));
  }
  else {
    $output = $image_html;
  }

  $block = new stdClass();
  $block->module = 'uclalib_location';
  $block->delta = $subtype;
  $block->title = '@todo';
  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $output,
    ),
  );

  return $block;
}
