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
    if (!empty($node->field_hours)) {
      $block->content = '<div class="open-now-pane"><span class="location-open-now"><div class="spinner"><div class="bounce1"></div><div class="bounce2"></div><div class="bounce3"></div></div></span></div>';
      # TODO: move this to a css file, not inline :-P
      drupal_add_css(
        '.spinner {
          height: 17px;
          text-align: left;
        }

        .spinner > div {
          width: 12px;
          height: 12px;
          background-color: #1e4b87;
          margin: 0 0.5em;
          border-radius: 100%;
          display: inline-block;
          -webkit-animation: sk-bouncedelay 1.4s infinite ease-in-out both;
          animation: sk-bouncedelay 1.4s infinite ease-in-out both;
        }

        .spinner .bounce1 {
          -webkit-animation-delay: -0.32s;
          animation-delay: -0.32s;
        }

        .spinner .bounce2 {
          -webkit-animation-delay: -0.16s;
          animation-delay: -0.16s;
        }

        @-webkit-keyframes sk-bouncedelay {
          0%, 80%, 100% { -webkit-transform: scale(0) }
          40% { -webkit-transform: scale(1.0) }
        }

        @keyframes sk-bouncedelay {
          0%, 80%, 100% { 
            -webkit-transform: scale(0);
            transform: scale(0);
          } 40% { 
            -webkit-transform: scale(1.0);
            transform: scale(1.0);
          }
        }', 
        'inline'
      );
    }
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
