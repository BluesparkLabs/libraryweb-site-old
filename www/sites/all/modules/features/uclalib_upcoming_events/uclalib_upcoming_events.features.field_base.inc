<?php
/**
 * @file
 * uclalib_upcoming_events.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uclalib_upcoming_events_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_upcoming_events_events'.
  $field_bases['field_upcoming_events_events'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_upcoming_events_events',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'exhibition' => 'exhibition',
          'uclalib_event' => 'uclalib_event',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
