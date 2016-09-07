<?php
/**
 * @file
 * uclalib_opening_hours.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function uclalib_opening_hours_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'field_location_email_icomoon';
  $content->admin_title = 'Email with icomoon';
  $content->admin_description = '';
  $content->category = 'icons';
  $content->settings = array(
    'admin_title' => 'Email with icomoon',
    'title' => '',
    'body' => '<span class="icon-email"></span>&nbsp;%node:field_location_email',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['field_location_email_icomoon'] = $content;

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'field_location_phone_icomoon';
  $content->admin_title = 'Phone with icomoon';
  $content->admin_description = 'Phone Icomoon';
  $content->category = 'icons';
  $content->settings = array(
    'admin_title' => 'Phone with icomoon',
    'title' => '',
    'body' => '<span class="icon-telephone"></span>&nbsp;%node:field_location_phone
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['field_location_phone_icomoon'] = $content;

  return $export;
}
