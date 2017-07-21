<?php
/**
 * @file
 * uclalib_destination.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uclalib_destination_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_destination_facilities|node|destination|form';
  $field_group->group_name = 'group_destination_facilities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'destination';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At this destination',
    'weight' => '1',
    'children' => array(
      0 => 'field_amenities',
      1 => 'field_equipment',
      2 => 'field_study_areas',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-destination-facilities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_destination_facilities|node|destination|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_destination_info|node|destination|form';
  $field_group->group_name = 'group_destination_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'destination';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Destination Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_destination_email',
      2 => 'field_destination_location',
      3 => 'field_destination_phone',
      4 => 'field_destination_sched_link',
      5 => 'field_destination_room_number',
      6 => 'field_location_building',
      7 => 'field_hours',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-destination-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_destination_info|node|destination|form'] = $field_group;

  return $export;
}
