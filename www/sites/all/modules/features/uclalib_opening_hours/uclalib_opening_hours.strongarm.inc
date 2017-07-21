<?php
/**
 * @file
 * uclalib_opening_hours.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uclalib_opening_hours_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'hours_page' => array(
        'label' => 'Hours Page',
        'custom settings' => 1,
      ),
      'event_listed_from_bean' => array(
        'label' => 'Event Listed From a Bean',
        'custom settings' => 1,
      ),
      'todays_hours' => array(
        'label' => 'Today\'s Hours',
        'custom settings' => 1,
      ),
      'weeks_hours' => array(
        'label' => 'Week\'s Hours',
        'custom settings' => 1,
      ),
    ),
    'file' => array(
      'thumbnail' => array(
        'label' => 'Thumbnail',
        'custom settings' => 1,
      ),
      'custom_crop' => array(
        'label' => 'Custom Crop',
        'custom settings' => 1,
      ),
      'widescreen' => array(
        'label' => 'Widescreen',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  return $export;
}
