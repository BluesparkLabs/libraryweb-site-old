<?php
/**
 * @file
 * uclalib_destination.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_destination_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'location_destinations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location Destinations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_location_destinations_node']['id'] = 'reverse_field_location_destinations_node';
  $handler->display->display_options['relationships']['reverse_field_location_destinations_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_location_destinations_node']['field'] = 'reverse_field_location_destinations_node';
  $handler->display->display_options['relationships']['reverse_field_location_destinations_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Room Number */
  $handler->display->display_options['fields']['field_destination_room_number']['id'] = 'field_destination_room_number';
  $handler->display->display_options['fields']['field_destination_room_number']['table'] = 'field_data_field_destination_room_number';
  $handler->display->display_options['fields']['field_destination_room_number']['field'] = 'field_destination_room_number';
  $handler->display->display_options['fields']['field_destination_room_number']['label'] = '';
  $handler->display->display_options['fields']['field_destination_room_number']['element_label_colon'] = FALSE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_destination_phone']['id'] = 'field_destination_phone';
  $handler->display->display_options['fields']['field_destination_phone']['table'] = 'field_data_field_destination_phone';
  $handler->display->display_options['fields']['field_destination_phone']['field'] = 'field_destination_phone';
  $handler->display->display_options['fields']['field_destination_phone']['label'] = '';
  $handler->display->display_options['fields']['field_destination_phone']['element_class'] = 'icon-telephone';
  $handler->display->display_options['fields']['field_destination_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_phone']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_destination_email']['id'] = 'field_destination_email';
  $handler->display->display_options['fields']['field_destination_email']['table'] = 'field_data_field_destination_email';
  $handler->display->display_options['fields']['field_destination_email']['field'] = 'field_destination_email';
  $handler->display->display_options['fields']['field_destination_email']['label'] = '';
  $handler->display->display_options['fields']['field_destination_email']['element_class'] = 'icon-email';
  $handler->display->display_options['fields']['field_destination_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_email']['hide_empty'] = TRUE;
  /* Field: Content: Schedule appointment link */
  $handler->display->display_options['fields']['field_destination_sched_link']['id'] = 'field_destination_sched_link';
  $handler->display->display_options['fields']['field_destination_sched_link']['table'] = 'field_data_field_destination_sched_link';
  $handler->display->display_options['fields']['field_destination_sched_link']['field'] = 'field_destination_sched_link';
  $handler->display->display_options['fields']['field_destination_sched_link']['label'] = '';
  $handler->display->display_options['fields']['field_destination_sched_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_destination_sched_link']['alter']['text'] = '<a href="[field_destination_sched_link-url]">Schedule an appointment</a>';
  $handler->display->display_options['fields']['field_destination_sched_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_destination_sched_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_destination_sched_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_destination_sched_link']['type'] = 'link_plain';
  /* Field: UCLALIB: Facilities Icons. */
  $handler->display->display_options['fields']['facilities_icons']['id'] = 'facilities_icons';
  $handler->display->display_options['fields']['facilities_icons']['table'] = 'node';
  $handler->display->display_options['fields']['facilities_icons']['field'] = 'facilities_icons';
  $handler->display->display_options['fields']['facilities_icons']['label'] = '';
  $handler->display->display_options['fields']['facilities_icons']['element_label_colon'] = FALSE;
  /* Field: Content: Hours */
  $handler->display->display_options['fields']['field_hours']['id'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['table'] = 'field_data_field_hours';
  $handler->display->display_options['fields']['field_hours']['field'] = 'field_hours';
  $handler->display->display_options['fields']['field_hours']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Destinations (field_location_destinations:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_location_destinations';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_location_destinations_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'destination' => 'destination',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Locations';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['location_destinations'] = $view;

  return $export;
}
