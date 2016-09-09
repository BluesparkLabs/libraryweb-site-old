<?php

/**
 * @file
 * This plugins displays a location's contact info, including address (linked
 * to UCLA map), phone number and email address.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category' => t('Locations'),
  'title' => t('Contact info: address, email, phone)'),
  'description' => t('Contact info for a given location.'),

  'required context' => new ctools_context_required(t('Node'), 'node'),

  'edit form'          => 'uclalib_location_ctools_content_types_location_contact_edit_form',
  'render callback' => 'uclalib_location_ctools_content_types_location_contact_render',
);

/**
 * Edit form callback.
 */
function uclalib_location_ctools_content_types_location_contact_edit_form($form, &$form_state) {

  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib destination:All facilities".
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
function uclalib_location_ctools_content_types_location_contact_render($subtype, $conf, $panel_args, $pane_context) {
  if (!isset($pane_context->data)) {

    return;
  }
  $node = $pane_context->data;

  //dpm($node);

  // Generate Address.
  $address = field_view_field('node', $node, 'field_address');
  $address_value = strip_tags($node->field_address[LANGUAGE_NONE][0]['safe_value']);
  $address_html = '<span class="icon-mappin"></span> <span class="location__address-text">' . $address_value . '</span>';

  // Google seems to be handling place links by name better than by address. So
  // We create the place link by combining "UCLA" with "Location Name" plus
  // "Building". If the Location has no building name value, fallback to address.
  if (isset($node->field_location_building[LANGUAGE_NONE][0]['safe_value'])) {
    $building_name = $node->field_location_building[LANGUAGE_NONE][0]['safe_value'];
  }
  else {
    $building_name = $address_value;
  }
  $place_name = "UCLA " . $node->title . ", " . $building_name;

  $output = '<div class="location__address">';

  // Setup a Google map link url based on the address on file.
  $google_map_url = 'https://www.google.com/maps/place/' . urlencode($place_name) . '/';
  if (!isset($node->field_location_map_link[LANGUAGE_NONE][0]['url'])) {
    $output .= l($address_html, $google_map_url, array('absolute' => TRUE, 'html' => TRUE, 'attributes' => array('class' => array('location__address-link location__address-link--googlemap'))));
  }

  // But if we have custom location map link, use it intead for desktop.
  else {
    $dektop_map_url = $node->field_location_map_link[LANGUAGE_NONE][0]['url'];
    $output .= l($address_html, $dektop_map_url, array('absolute' => TRUE, 'html' => TRUE, 'attributes' => array('class' => array('location__address-link--desktop desk-only'))));

    // And if we have a separate custom mobile map link, use it for mobile.
    if (isset($node->field_location_map_link_mobile[LANGUAGE_NONE][0]['url'])) {
      $mobile_map_url = $node->field_location_map_link_mobile[LANGUAGE_NONE][0]['url'];
      $output .= l($address_html, $mobile_map_url, array('absolute' => TRUE, 'html' => TRUE, 'attributes' => array('class' => array('location__address-link--mobile palm-lap-only'))));
    }

    // But if no mobile map link yet, fallback again to the Google link on mobile.
    else {
      $output .= l($address_html, $google_map_url, array('absolute' => TRUE, 'html' => TRUE, 'attributes' => array('class' => array('llocation__address-link--mobile location__address-link--googlemap palm-lap-only'))));
    }
  }

  $output .= '</div>';

  // Add telephone.
  if (isset($node->field_location_phone[LANGUAGE_NONE][0]['value'])) {
    $phone = filter_xss($node->field_location_phone[LANGUAGE_NONE][0]['value']);
    $output .= '<div class="location__phone"><span class="icon-telephone desk-only"></span> <span class="location__phone-number">' . $phone . '</span></div>';
  }

  // Add email address.
  if (isset($node->field_location_email[LANGUAGE_NONE][0]['email'])) {
    $email_address = filter_xss($node->field_location_email[LANGUAGE_NONE][0]['email']);
    $output .= '<div class="location__email"><span class="icon-email desk-only"></span> <a href="mailto:' . $email_address . '" class="location__email-link location__email-link">' . $email_address . '</a></div>';
  }

  $block = new stdClass();
  $block->module = 'uclalib_location';
  $block->delta = $subtype;
  $block->title = '';
  $block->content = array(
    'content' => array(
      '#type' => 'markup',
      '#markup' => $output,
    ),
  );

  return $block;
}
