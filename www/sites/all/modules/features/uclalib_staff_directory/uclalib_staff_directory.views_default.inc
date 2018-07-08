<?php
/**
 * @file
 * uclalib_staff_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_staff_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_staff_departments',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'department';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'staff_departments' => 'staff_departments',
    'academic_departmental_liaison' => 0,
    'area_of_expertise' => 0,
    'audience' => 0,
    'blog_name' => 0,
    'collection_endowment_initiative' => 0,
    'events_and_exhibitions_series' => 0,
    'events_categories' => 0,
    'location_amenities' => 0,
    'location_equipment' => 0,
    'location_study_areas' => 0,
    'media_subject' => 0,
    'media_tags' => 0,
    'news_categories' => 0,
    'news_tags' => 0,
    'resource_categories' => 0,
    'staff_subject_areas' => 0,
    'tags' => 0,
  );
  /* Field: Content: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'field_data_field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => 'staff_profile_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'field_data_field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Location */
  $handler->display->display_options['fields']['field_staff_location']['id'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['table'] = 'field_data_field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['field'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['label'] = '';
  $handler->display->display_options['fields']['field_staff_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_staff_location']['delta_offset'] = '0';
  /* Field: Content: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Departments */
  $handler->display->display_options['fields']['field_staff_departments']['id'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['table'] = 'field_data_field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['field'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['label'] = '';
  $handler->display->display_options['fields']['field_staff_departments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_departments']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_staff_departments']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_staff_departments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_staff_departments']['delta_reversed'] = TRUE;
  /* Contextual filter: Content: Staff Departments (field_staff_departments) */
  $handler->display->display_options['arguments']['field_staff_departments_tid']['id'] = 'field_staff_departments_tid';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['table'] = 'field_data_field_staff_departments';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['field'] = 'field_staff_departments_tid';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['arguments']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_staff_last_name_value']['limit'] = '0';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
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
    'staff_profile' => 'staff_profile',
  );
  /* Filter criterion: Content: Staff Departments (field_staff_departments:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_staff_departments';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'staff-view/%/%';

  /* Display: Staff by Department */
  $handler = $view->new_display('panel_pane', 'Staff by Department', 'pane_staff_dept');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff by Department';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'department';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'staff_departments' => 'staff_departments',
    'academic_departmental_liaison' => 0,
    'area_of_expertise' => 0,
    'audience' => 0,
    'blog_name' => 0,
    'collection_endowment_initiative' => 0,
    'events_and_exhibitions_series' => 0,
    'events_categories' => 0,
    'location_amenities' => 0,
    'location_equipment' => 0,
    'location_study_areas' => 0,
    'media_subject' => 0,
    'media_tags' => 0,
    'news_categories' => 0,
    'news_tags' => 0,
    'resource_categories' => 0,
    'staff_subject_areas' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'field_data_field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => 'staff_profile_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'field_data_field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Location */
  $handler->display->display_options['fields']['field_staff_location']['id'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['table'] = 'field_data_field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['field'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['label'] = '';
  $handler->display->display_options['fields']['field_staff_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_location']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_staff_location']['delta_offset'] = '0';
  /* Field: Content: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Departments */
  $handler->display->display_options['fields']['field_staff_departments']['id'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['table'] = 'field_data_field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['field'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['label'] = '';
  $handler->display->display_options['fields']['field_staff_departments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_departments']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_staff_departments']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_staff_departments']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_staff_departments']['delta_reversed'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['sorts']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '1';
  /* Contextual filter: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['arguments']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_staff_last_name_value']['limit'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_staff_departments_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Staff Departments (field_staff_departments)',
    ),
    'field_staff_last_name_value' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Staff Last Name (field_staff_last_name)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Staff by Location */
  $handler = $view->new_display('panel_pane', 'Staff by Location', 'pane_staff_loc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff by Location';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'field_data_field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => 'staff_profile_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'field_data_field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Location */
  $handler->display->display_options['fields']['field_staff_location']['id'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['table'] = 'field_data_field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['field'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['label'] = '';
  $handler->display->display_options['fields']['field_staff_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_staff_location']['delta_offset'] = '0';
  /* Field: Content: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Departments */
  $handler->display->display_options['fields']['field_staff_departments']['id'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['table'] = 'field_data_field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['field'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['label'] = '';
  $handler->display->display_options['fields']['field_staff_departments']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_departments']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_departments']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_staff_departments']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'term_node_tid';
  /* Sort criterion: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['sorts']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Staff Location (field_staff_location) */
  $handler->display->display_options['arguments']['field_staff_location_target_id']['id'] = 'field_staff_location_target_id';
  $handler->display->display_options['arguments']['field_staff_location_target_id']['table'] = 'field_data_field_staff_location';
  $handler->display->display_options['arguments']['field_staff_location_target_id']['field'] = 'field_staff_location_target_id';
  $handler->display->display_options['arguments']['field_staff_location_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_staff_location_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_staff_location_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_staff_location_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Staff Departments (field_staff_departments) */
  $handler->display->display_options['arguments']['field_staff_departments_tid']['id'] = 'field_staff_departments_tid';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['table'] = 'field_data_field_staff_departments';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['field'] = 'field_staff_departments_tid';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_staff_departments_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_staff_location_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Staff Location (field_staff_location)',
    ),
    'field_staff_departments_tid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Staff Departments (field_staff_departments)',
    ),
  );

  /* Display: List of Locations */
  $handler = $view->new_display('panel_pane', 'List of Locations', 'staff_loc_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Location';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_staff_location_node']['id'] = 'reverse_field_staff_location_node';
  $handler->display->display_options['relationships']['reverse_field_staff_location_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_staff_location_node']['field'] = 'reverse_field_staff_location_node';
  $handler->display->display_options['relationships']['reverse_field_staff_location_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/staff';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'location' => 'location',
  );

  /* Display: Attachment Glossary */
  $handler = $view->new_display('attachment', 'Attachment Glossary', 'attachment_glossary');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Last Name';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'field_data_field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => 'staff_profile_photo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Staff Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'field_data_field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_title']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Location */
  $handler->display->display_options['fields']['field_staff_location']['id'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['table'] = 'field_data_field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['field'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['label'] = '';
  $handler->display->display_options['fields']['field_staff_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_location']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_staff_location']['delta_offset'] = '0';
  /* Field: Content: Staff Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['label'] = '';
  $handler->display->display_options['fields']['field_staff_email']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Phone */
  $handler->display->display_options['fields']['field_staff_phone']['id'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['table'] = 'field_data_field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['field'] = 'field_staff_phone';
  $handler->display->display_options['fields']['field_staff_phone']['label'] = '';
  $handler->display->display_options['fields']['field_staff_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Staff Last Name */
  $handler->display->display_options['fields']['field_staff_last_name']['id'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['field'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_staff_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_staff_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['sorts']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['sorts']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Staff Last Name (field_staff_last_name) */
  $handler->display->display_options['arguments']['field_staff_last_name_value']['id'] = 'field_staff_last_name_value';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['table'] = 'field_data_field_staff_last_name';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['field'] = 'field_staff_last_name_value';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_staff_last_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_staff_last_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_staff_last_name_value']['limit'] = '1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'pane_staff' => 'pane_staff',
    'default' => 0,
    'pane_staff_loc' => 0,
    'staff_loc_list' => 0,
  );
  $handler->display->display_options['inherit_pager'] = TRUE;
  $handler->display->display_options['render_pager'] = TRUE;
  $export['staff'] = $view;

  $view = new view();
  $view->name = 'staff_department';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Staff Department';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'staff_departments' => 'staff_departments',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'staff-department/%';

  /* Display: Departments */
  $handler = $view->new_display('panel_pane', 'Departments', 'departments');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Department';
  $handler->display->display_options['display_description'] = 'lists departments on the Staff Directory landing page';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'staff_departments' => 'staff_departments',
  );
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'parent';
  $handler->display->display_options['filters']['tid_raw']['operator'] = 'empty';

  /* Display: Department Title */
  $handler = $view->new_display('panel_pane', 'Department Title', 'department_title');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_department_social_links']['id'] = 'field_department_social_links';
  $handler->display->display_options['fields']['field_department_social_links']['table'] = 'field_data_field_department_social_links';
  $handler->display->display_options['fields']['field_department_social_links']['field'] = 'field_department_social_links';
  $handler->display->display_options['fields']['field_department_social_links']['label'] = '';
  $handler->display->display_options['fields']['field_department_social_links']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department_social_links']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_department_locations']['id'] = 'field_department_locations';
  $handler->display->display_options['fields']['field_department_locations']['table'] = 'field_data_field_department_locations';
  $handler->display->display_options['fields']['field_department_locations']['field'] = 'field_department_locations';
  $handler->display->display_options['fields']['field_department_locations']['label'] = 'Libraries';
  $handler->display->display_options['fields']['field_department_locations']['exclude'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );

  /* Display: Department Body */
  $handler = $view->new_display('panel_pane', 'Department Body', 'department_body');
  $handler->display->display_options['display_description'] = 'shows department description, phone, and sub departments in body of Department page above lists of staff';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_department_phone']['id'] = 'field_department_phone';
  $handler->display->display_options['fields']['field_department_phone']['table'] = 'field_data_field_department_phone';
  $handler->display->display_options['fields']['field_department_phone']['field'] = 'field_department_phone';
  $handler->display->display_options['fields']['field_department_phone']['label'] = '';
  $handler->display->display_options['fields']['field_department_phone']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Taxonomy term: Term ID',
    ),
  );
  $export['staff_department'] = $view;

  $view = new view();
  $view->name = 'staff_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_site_general_search';
  $view->human_name = 'Staff Directory Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Staff Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_staff_job_title']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Staff First Name */
  $handler->display->display_options['fields']['field_staff_first_name']['id'] = 'field_staff_first_name';
  $handler->display->display_options['fields']['field_staff_first_name']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_first_name']['field'] = 'field_staff_first_name';
  /* Field: Indexed Content: Staff Last Name */
  $handler->display->display_options['fields']['field_staff_last_name']['id'] = 'field_staff_last_name';
  $handler->display->display_options['fields']['field_staff_last_name']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_last_name']['field'] = 'field_staff_last_name';
  /* Field: Indexed Content: Staff Departments */
  $handler->display->display_options['fields']['field_staff_departments']['id'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_departments']['field'] = 'field_staff_departments';
  $handler->display->display_options['fields']['field_staff_departments']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_staff_departments']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_staff_departments']['bypass_access'] = 0;
  /* Field: Indexed Content: Staff Location */
  $handler->display->display_options['fields']['field_staff_location']['id'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_location']['field'] = 'field_staff_location';
  $handler->display->display_options['fields']['field_staff_location']['label'] = '';
  $handler->display->display_options['fields']['field_staff_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_location']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_staff_location']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_staff_location']['bypass_access'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Indexed Content: Staff Image Thumbnail */
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['id'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['field'] = 'field_staff_image_thumbnail';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_image_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff_profile' => 'staff_profile',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_site_general_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
    3 => 0,
    6 => 0,
    7 => 0,
    11 => 0,
    12 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'staff_search_results');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'staff-search';
  $export['staff_search'] = $view;

  return $export;
}
