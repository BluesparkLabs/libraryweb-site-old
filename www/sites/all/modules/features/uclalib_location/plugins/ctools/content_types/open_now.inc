<?php
/**
 * @file
 */

$plugin = array(
  'category' => t('Locations'),
  'title' => t('Open Now'),
  'description' => t('Displays Open Now/Closed text for the current location page.'),
  'single' => TRUE,
  'render callback' => 'open_now_content_type_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array(),
  'edit form' => 'open_now_content_type_edit_form',
);

/**
 * Run-time rendering of the body of the block.
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time.
 * @param $args
 * @param $context
 *   Context - in this case we don't have any.
 *
 * @return
 *   An object with at least title and content members.
 */
function open_now_content_type_render($subtype, $conf, $args, $context) {
  $node = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();
  $block->content = '';

  if (isset($node->nid)) {

    // Add the js
    drupal_add_js(drupal_get_path('module', 'uclalib_location') . '/uclalib_location.js');
    drupal_add_js(array('locationNid' => array('nid' => $node->nid)), 'setting');

    $block->content = '<div class="open-now-pane"></div>';
  }

  if ($block->content) {
    return $block;
  }

}

/**
 * 'Edit form' callback for the content type.
 */
function open_now_content_type_edit_form($form, &$form_state) {
  // Provide a blank form so we have a place to have context setting.
  return $form;
}
