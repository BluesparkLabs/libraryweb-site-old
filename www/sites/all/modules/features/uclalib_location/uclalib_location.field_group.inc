<?php
/**
 * @file
 * uclalib_location.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uclalib_location_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_about|node|location|form';
  $field_group->group_name = 'group_location_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About the library',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-about field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_about|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_basic|node|location|form';
  $field_group->group_name = 'group_location_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_address',
      1 => 'field_location_alt_names',
      2 => 'field_location_building',
      3 => 'field_location_email',
      4 => 'field_location_nickname',
      5 => 'field_location_phone',
      6 => 'field_location_social_links',
      7 => 'field_location_image',
      8 => 'field_hours',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_basic|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_categories|node|location|form';
  $field_group->group_name = 'group_location_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-categories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_categories|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_destinations|node|location|form';
  $field_group->group_name = 'group_location_destinations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Destinations',
    'weight' => '7',
    'children' => array(
      0 => 'field_location_destinations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-destinations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_destinations|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_facilities|node|location|form';
  $field_group->group_name = 'group_location_facilities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'At this location',
    'weight' => '3',
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
        'classes' => 'group-location-facilities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_facilities|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_map|node|location|form';
  $field_group->group_name = 'group_location_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '5',
    'children' => array(
      0 => 'field_location_map_file',
      1 => 'field_location_map_image',
      2 => 'field_location_map_link',
      3 => 'field_location_floor_plan',
      4 => 'field_location_map_link_mobile',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location-map field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_map|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quick_links|node|location|form';
  $field_group->group_name = 'group_quick_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quick Links',
    'weight' => '9',
    'children' => array(
      0 => 'field_quick_links',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-quick-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_quick_links|node|location|form'] = $field_group;

  return $export;
}
