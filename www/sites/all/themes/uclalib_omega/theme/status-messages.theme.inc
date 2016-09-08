<?php

/**
 * @file
 * Contains the theme function override for 'status_messages'.
 */

/**
 * Returns HTML for status and/or error messages, grouped by type.
 *
 * @ingroup themeable
 */
function uclalib_omega_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= '<div class="messages messages--' . $type . '">';
    $output .= '<div class="messages__wrapper">';
    $output .= '<span class="icon-' . $type . '"></span>';
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>";
    }
    $output .= '<div class="messages__content">';
    if (count($messages) > 1) {
      $output .= '<ul>';
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . '</li>';
      }
      $output .= '</ul>';
    }
    else {
      $output .= $messages[0];
    }
    $output .= '</div></div></div>';
  }

  return $output;
}
