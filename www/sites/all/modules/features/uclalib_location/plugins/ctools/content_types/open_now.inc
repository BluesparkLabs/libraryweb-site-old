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

  if (isset($node->nid)) {
    if (!empty($node->field_hours)) {
      $block->content['open_now']['#markup'] = '<div class="open-now-pane"><span class="location-open-now"><div class="spinner"><div class="bounce1"></div><div class="bounce2"></div><div class="bounce3"></div></div></span></div>';
      $block->content['open_now']['#attached']['css'] = array(drupal_get_path('module', 'uclalib_location') . '/uclalib_location_open_now.css');
      $block->content['open_now']['#attached']['library'] = array(
          array('ucla_libhours', 'underscore'),
          array('ucla_libhours', 'backbone'),
      );
      $block->content['open_now']['#attached']['js'] = array(
        array(
          'type' => 'setting',
          'data' =>  array(
            'uclalib_location' => array('lid' => $node->field_hours[LANGUAGE_NONE][0]['value']),
          ),
        ),
        array(
          'data' => drupal_get_path('module', 'uclalib_location') . '/uclalib_location_open_now.js',
        ),
      );
    }

    return $block;
  }

  return $block;
}

/**
 * 'Edit form' callback for the content type.
 */
function open_now_content_type_edit_form($form, &$form_state) {
  // Provide a blank form so we have a place to have context setting.
  return $form;
}
