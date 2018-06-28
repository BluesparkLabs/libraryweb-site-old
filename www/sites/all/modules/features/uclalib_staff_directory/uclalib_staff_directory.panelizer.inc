<?php
/**
 * @file
 * uclalib_staff_directory.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_staff_directory_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'staff_departments';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'taxonomy_term:staff_departments:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'sidebar-left-golden';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4acc8086-96ef-4181-972f-da0cb710cd59';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:staff_departments:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-74181048-10ae-4f53-a435-f3075bbd31f0';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_department_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'phone',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '74181048-10ae-4f53-a435-f3075bbd31f0';
  $display->content['new-74181048-10ae-4f53-a435-f3075bbd31f0'] = $pane;
  $display->panels['main'][0] = 'new-74181048-10ae-4f53-a435-f3075bbd31f0';
  $pane = new stdClass();
  $pane->pid = 'new-bdd1f33c-646f-41f5-8b6d-490d21e61a40';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_department_locations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => FALSE,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bdd1f33c-646f-41f5-8b6d-490d21e61a40';
  $display->content['new-bdd1f33c-646f-41f5-8b6d-490d21e61a40'] = $pane;
  $display->panels['main'][1] = 'new-bdd1f33c-646f-41f5-8b6d-490d21e61a40';
  $pane = new stdClass();
  $pane->pid = 'new-8d71ea3f-fff9-4bf4-a5c6-11eadd37dce3';
  $pane->panel = 'main';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8d71ea3f-fff9-4bf4-a5c6-11eadd37dce3';
  $display->content['new-8d71ea3f-fff9-4bf4-a5c6-11eadd37dce3'] = $pane;
  $display->panels['main'][2] = 'new-8d71ea3f-fff9-4bf4-a5c6-11eadd37dce3';
  $pane = new stdClass();
  $pane->pid = 'new-605ad84f-c3af-4ae0-b423-d6e28dee2dd7';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff-pane_staff_dept';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '605ad84f-c3af-4ae0-b423-d6e28dee2dd7';
  $display->content['new-605ad84f-c3af-4ae0-b423-d6e28dee2dd7'] = $pane;
  $display->panels['main'][3] = 'new-605ad84f-c3af-4ae0-b423-d6e28dee2dd7';
  $pane = new stdClass();
  $pane->pid = 'new-e64bedc7-ca1f-44ae-9053-5041fb315a2f';
  $pane->panel = 'sidebar_left';
  $pane->type = 'uclalib_nav';
  $pane->subtype = 'uclalib_nav';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'background-blue',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e64bedc7-ca1f-44ae-9053-5041fb315a2f';
  $display->content['new-e64bedc7-ca1f-44ae-9053-5041fb315a2f'] = $pane;
  $display->panels['sidebar_left'][0] = 'new-e64bedc7-ca1f-44ae-9053-5041fb315a2f';
  $pane = new stdClass();
  $pane->pid = 'new-d7611060-f913-4a0a-aadc-84b9925f9d3e';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'bean-staff-directory-quick-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'background-gray',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd7611060-f913-4a0a-aadc-84b9925f9d3e';
  $display->content['new-d7611060-f913-4a0a-aadc-84b9925f9d3e'] = $pane;
  $display->panels['sidebar_left'][1] = 'new-d7611060-f913-4a0a-aadc-84b9925f9d3e';
  $pane = new stdClass();
  $pane->pid = 'new-7f3374d1-c22f-46ed-8f3f-4464b9ac25a0';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_department-department_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f3374d1-c22f-46ed-8f3f-4464b9ac25a0';
  $display->content['new-7f3374d1-c22f-46ed-8f3f-4464b9ac25a0'] = $pane;
  $display->panels['top'][0] = 'new-7f3374d1-c22f-46ed-8f3f-4464b9ac25a0';
  $pane = new stdClass();
  $pane->pid = 'new-e8ab610e-ca5c-4562-8cdc-b4346f9f09ec';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_department_social_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'social_links',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'default',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e8ab610e-ca5c-4562-8cdc-b4346f9f09ec';
  $display->content['new-e8ab610e-ca5c-4562-8cdc-b4346f9f09ec'] = $pane;
  $display->panels['top'][1] = 'new-e8ab610e-ca5c-4562-8cdc-b4346f9f09ec';
  $pane = new stdClass();
  $pane->pid = 'new-360fd62c-0272-44e3-9ebe-39843016fb4a';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'bean-staff-directory-gallery';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '360fd62c-0272-44e3-9ebe-39843016fb4a';
  $display->content['new-360fd62c-0272-44e3-9ebe-39843016fb4a'] = $pane;
  $display->panels['top'][2] = 'new-360fd62c-0272-44e3-9ebe-39843016fb4a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-74181048-10ae-4f53-a435-f3075bbd31f0';
  $panelizer->display = $display;
  $export['taxonomy_term:staff_departments:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'taxonomy_term';
  $panelizer->panelizer_key = 'staff_departments';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'taxonomy_term:staff_departments:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'sidebar-left-golden';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dfa90218-9e11-4f1b-a8b3-167c37136962';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'taxonomy_term:staff_departments:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-955dfe9d-3bd9-43b6-bbe0-68e7888c79a9';
  $pane->panel = 'main';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '955dfe9d-3bd9-43b6-bbe0-68e7888c79a9';
  $display->content['new-955dfe9d-3bd9-43b6-bbe0-68e7888c79a9'] = $pane;
  $display->panels['main'][0] = 'new-955dfe9d-3bd9-43b6-bbe0-68e7888c79a9';
  $pane = new stdClass();
  $pane->pid = 'new-37aed724-4720-469b-8ad6-14333ffb252f';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_department_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'phone',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '37aed724-4720-469b-8ad6-14333ffb252f';
  $display->content['new-37aed724-4720-469b-8ad6-14333ffb252f'] = $pane;
  $display->panels['main'][1] = 'new-37aed724-4720-469b-8ad6-14333ffb252f';
  $pane = new stdClass();
  $pane->pid = 'new-e3dbba6b-b1fc-416c-81ff-0a97286ffffc';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_department_locations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => FALSE,
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e3dbba6b-b1fc-416c-81ff-0a97286ffffc';
  $display->content['new-e3dbba6b-b1fc-416c-81ff-0a97286ffffc'] = $pane;
  $display->panels['main'][2] = 'new-e3dbba6b-b1fc-416c-81ff-0a97286ffffc';
  $pane = new stdClass();
  $pane->pid = 'new-5247d2a3-6029-4446-bc40-8151420c243f';
  $pane->panel = 'main';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_department_social_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'multifield_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'view_mode' => 'default',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5247d2a3-6029-4446-bc40-8151420c243f';
  $display->content['new-5247d2a3-6029-4446-bc40-8151420c243f'] = $pane;
  $display->panels['main'][3] = 'new-5247d2a3-6029-4446-bc40-8151420c243f';
  $pane = new stdClass();
  $pane->pid = 'new-20477f65-8f01-498e-96f0-2bf806817e34';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_department-department_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '20477f65-8f01-498e-96f0-2bf806817e34';
  $display->content['new-20477f65-8f01-498e-96f0-2bf806817e34'] = $pane;
  $display->panels['top'][0] = 'new-20477f65-8f01-498e-96f0-2bf806817e34';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-37aed724-4720-469b-8ad6-14333ffb252f';
  $panelizer->display = $display;
  $export['taxonomy_term:staff_departments:default:default'] = $panelizer;

  return $export;
}
