<?php
/**
 * @file
 * uclalib_opening_hours.entity.inc
 */

/**
 * Implements hook_entity_view_mode_info().
 */
function uclalib_opening_hours_entity_view_mode_info() {
  $info = array();

  $info['node']['hours_page'] = array(
    'label' => 'Hours Page',
    'custom settings' => 1,
  );

  $info['node']['todays_hours'] = array(
    'label' => 'Today\'s Hours',
    'custom settings' => 1,
  );

  $info['node']['weeks_hours'] = array(
    'label' => 'Week\'s Hours',
    'custom settings' => 1,
  );

  return $info;
}
