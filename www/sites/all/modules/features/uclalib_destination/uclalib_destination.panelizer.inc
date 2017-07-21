<?php
/**
 * @file
 * uclalib_destination.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_destination_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:destination:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'destination';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array(
    0 => array(
      'identifier' => 'Global',
      'keyword' => 'global',
      'name' => 'token',
      'id' => 1,
    ),
  );
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'sidebar-left';
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
  $display->uuid = '16ff1bbd-61f5-4b3b-bb66-909af770948a';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f864c846-fe02-452a-9f50-6a0e51c9ad8c';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
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
    $pane->uuid = 'f864c846-fe02-452a-9f50-6a0e51c9ad8c';
    $display->content['new-f864c846-fe02-452a-9f50-6a0e51c9ad8c'] = $pane;
    $display->panels['main'][0] = 'new-f864c846-fe02-452a-9f50-6a0e51c9ad8c';
    $pane = new stdClass();
    $pane->pid = 'new-18f8edd9-f253-40a5-a64e-ea11e2bddee8';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'library_hours_table',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '18f8edd9-f253-40a5-a64e-ea11e2bddee8';
    $display->content['new-18f8edd9-f253-40a5-a64e-ea11e2bddee8'] = $pane;
    $display->panels['main'][1] = 'new-18f8edd9-f253-40a5-a64e-ea11e2bddee8';
    $pane = new stdClass();
    $pane->pid = 'new-f2da3970-dd7e-4c20-84fb-d49f48c32084';
    $pane->panel = 'main';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f2da3970-dd7e-4c20-84fb-d49f48c32084';
    $display->content['new-f2da3970-dd7e-4c20-84fb-d49f48c32084'] = $pane;
    $display->panels['main'][2] = 'new-f2da3970-dd7e-4c20-84fb-d49f48c32084';
    $pane = new stdClass();
    $pane->pid = 'new-536b276f-490f-4d2a-a1df-dab4d0b03800';
    $pane->panel = 'sidebar_left';
    $pane->type = 'uclalib_nav';
    $pane->subtype = 'uclalib_nav';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '536b276f-490f-4d2a-a1df-dab4d0b03800';
    $display->content['new-536b276f-490f-4d2a-a1df-dab4d0b03800'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-536b276f-490f-4d2a-a1df-dab4d0b03800';
    $pane = new stdClass();
    $pane->pid = 'new-f376cb6e-e699-4136-ba94-ee5e62d833d8';
    $pane->panel = 'top';
    $pane->type = 'uclalib_title';
    $pane->subtype = 'uclalib_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f376cb6e-e699-4136-ba94-ee5e62d833d8';
    $display->content['new-f376cb6e-e699-4136-ba94-ee5e62d833d8'] = $pane;
    $display->panels['top'][0] = 'new-f376cb6e-e699-4136-ba94-ee5e62d833d8';
    $pane = new stdClass();
    $pane->pid = 'new-d5e71510-0977-49bc-9ba1-9470fb15135a';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '%node:field_destination_room_number %node:field_destination_phone &nbsp;%node:field_destination_email</p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5e71510-0977-49bc-9ba1-9470fb15135a';
    $display->content['new-d5e71510-0977-49bc-9ba1-9470fb15135a'] = $pane;
    $display->panels['top'][1] = 'new-d5e71510-0977-49bc-9ba1-9470fb15135a';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-f2da3970-dd7e-4c20-84fb-d49f48c32084';
  $panelizer->display = $display;
  $export['node:destination:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:destination:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'destination';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Location Node',
      'keyword' => 'node',
      'name' => 'entity_from_field:field_destination_location-node-node',
      'delta' => 0,
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible:location_search_result';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'center_' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '65c4b881-62c0-4b21-a15e-c8f644fc06ed';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d00cec7-9ee0-4035-8fe0-6f6032b88072';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_map_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail_large',
        'image_link' => '',
      ),
      'context' => 'relationship_entity_from_field:field_destination_location-node-node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d00cec7-9ee0-4035-8fe0-6f6032b88072';
    $display->content['new-1d00cec7-9ee0-4035-8fe0-6f6032b88072'] = $pane;
    $display->panels['center'][0] = 'new-1d00cec7-9ee0-4035-8fe0-6f6032b88072';
    $pane = new stdClass();
    $pane->pid = 'new-a3c5c62f-f465-4090-a19d-c7440e9b35f0';
    $pane->panel = 'center_';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'h3',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3c5c62f-f465-4090-a19d-c7440e9b35f0';
    $display->content['new-a3c5c62f-f465-4090-a19d-c7440e9b35f0'] = $pane;
    $display->panels['center_'][0] = 'new-a3c5c62f-f465-4090-a19d-c7440e9b35f0';
    $pane = new stdClass();
    $pane->pid = 'new-fb5bbe3a-0414-48e0-9f97-db33bbd0c1df';
    $pane->panel = 'center_';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'relationship_entity_from_field:field_destination_location-node-node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb5bbe3a-0414-48e0-9f97-db33bbd0c1df';
    $display->content['new-fb5bbe3a-0414-48e0-9f97-db33bbd0c1df'] = $pane;
    $display->panels['center_'][1] = 'new-fb5bbe3a-0414-48e0-9f97-db33bbd0c1df';
    $pane = new stdClass();
    $pane->pid = 'new-cb1e02c9-937c-4b66-a903-42d4bebe880b';
    $pane->panel = 'center_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_destination_location-node-node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'cb1e02c9-937c-4b66-a903-42d4bebe880b';
    $display->content['new-cb1e02c9-937c-4b66-a903-42d4bebe880b'] = $pane;
    $display->panels['center_'][2] = 'new-cb1e02c9-937c-4b66-a903-42d4bebe880b';
    $pane = new stdClass();
    $pane->pid = 'new-11b06722-560a-4980-b4c9-4f9d2342e994';
    $pane->panel = 'center_';
    $pane->type = 'todays_hours';
    $pane->subtype = 'todays_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_entity_from_field:field_destination_location-node-node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '11b06722-560a-4980-b4c9-4f9d2342e994';
    $display->content['new-11b06722-560a-4980-b4c9-4f9d2342e994'] = $pane;
    $display->panels['center_'][3] = 'new-11b06722-560a-4980-b4c9-4f9d2342e994';
    $pane = new stdClass();
    $pane->pid = 'new-9d3200e6-c097-4655-a0d4-af670b9695cb';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'at_this_location_block-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'At This Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9d3200e6-c097-4655-a0d4-af670b9695cb';
    $display->content['new-9d3200e6-c097-4655-a0d4-af670b9695cb'] = $pane;
    $display->panels['right'][0] = 'new-9d3200e6-c097-4655-a0d4-af670b9695cb';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:destination:default:teaser'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:static:static_at_this_location';
  $panelizer->title = 'At this location static page';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'static';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array(
    0 => array(
      'identifier' => 'Global',
      'keyword' => 'global',
      'name' => 'token',
      'id' => 1,
    ),
  );
  $panelizer->relationships = array(
    0 => array(
      'identifier' => 'Menu parent',
      'keyword' => 'menu_parent_node',
      'name' => 'menu_parent_node',
      'context' => 'panelizer',
      'id' => 1,
    ),
  );
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'sidebar-left-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'page_header' => NULL,
      'left' => NULL,
      'center_top' => NULL,
      'right' => NULL,
      'center_left' => NULL,
      'center_right' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'sidebar_right' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '128c5862-34e9-4bae-8041-ac5ce079edbf';
  $display->window_title = '%node:title | %global:site:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b4d222fa-d54b-40b6-97cd-ec5c4bfa0016';
    $pane->panel = 'main';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'title-light',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4d222fa-d54b-40b6-97cd-ec5c4bfa0016';
    $display->content['new-b4d222fa-d54b-40b6-97cd-ec5c4bfa0016'] = $pane;
    $display->panels['main'][0] = 'new-b4d222fa-d54b-40b6-97cd-ec5c4bfa0016';
    $pane = new stdClass();
    $pane->pid = 'new-866b7c76-ae96-438b-ac27-e30942eb05a2';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
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
    $pane->uuid = '866b7c76-ae96-438b-ac27-e30942eb05a2';
    $display->content['new-866b7c76-ae96-438b-ac27-e30942eb05a2'] = $pane;
    $display->panels['main'][1] = 'new-866b7c76-ae96-438b-ac27-e30942eb05a2';
    $pane = new stdClass();
    $pane->pid = 'new-486078cc-3510-48ba-b31d-776892156b5c';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Location has floor plan',
            'php' => '$node = $contexts[\'relationship_menu_parent_node_1\']->data;

if (isset($node->field_location_floor_plan[LANGUAGE_NONE][0][\'fid\'])) {
  return TRUE;
}

return FALSE;',
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<a href="%menu_parent_node:field_location_floor_plan">Download a Map of the Floor Plan</a>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '486078cc-3510-48ba-b31d-776892156b5c';
    $display->content['new-486078cc-3510-48ba-b31d-776892156b5c'] = $pane;
    $display->panels['main'][2] = 'new-486078cc-3510-48ba-b31d-776892156b5c';
    $pane = new stdClass();
    $pane->pid = 'new-62b86f86-f772-440e-8ee6-7754311def62';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'location_destinations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_menu_parent_node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '62b86f86-f772-440e-8ee6-7754311def62';
    $display->content['new-62b86f86-f772-440e-8ee6-7754311def62'] = $pane;
    $display->panels['main'][3] = 'new-62b86f86-f772-440e-8ee6-7754311def62';
    $pane = new stdClass();
    $pane->pid = 'new-2a4e719e-0e3e-43b2-82ea-832c0e43bf22';
    $pane->panel = 'sidebar_left';
    $pane->type = 'open_now';
    $pane->subtype = 'open_now';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_menu_parent_node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a4e719e-0e3e-43b2-82ea-832c0e43bf22';
    $display->content['new-2a4e719e-0e3e-43b2-82ea-832c0e43bf22'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-2a4e719e-0e3e-43b2-82ea-832c0e43bf22';
    $pane = new stdClass();
    $pane->pid = 'new-5f65d032-6f65-480e-b1f0-5d3fcf95e60e';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-1',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5f65d032-6f65-480e-b1f0-5d3fcf95e60e';
    $display->content['new-5f65d032-6f65-480e-b1f0-5d3fcf95e60e'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-5f65d032-6f65-480e-b1f0-5d3fcf95e60e';
    $pane = new stdClass();
    $pane->pid = 'new-ee7bc79c-ca6d-422f-a408-7d439944ec19';
    $pane->panel = 'sidebar_left';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'relationship_menu_parent_node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-2',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ee7bc79c-ca6d-422f-a408-7d439944ec19';
    $display->content['new-ee7bc79c-ca6d-422f-a408-7d439944ec19'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-ee7bc79c-ca6d-422f-a408-7d439944ec19';
    $pane = new stdClass();
    $pane->pid = 'new-7cdd69b5-2696-4eff-9260-11b1c7009c48';
    $pane->panel = 'sidebar_right';
    $pane->type = 'all_facilities';
    $pane->subtype = 'all_facilities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'relationship_menu_parent_node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7cdd69b5-2696-4eff-9260-11b1c7009c48';
    $display->content['new-7cdd69b5-2696-4eff-9260-11b1c7009c48'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-7cdd69b5-2696-4eff-9260-11b1c7009c48';
    $pane = new stdClass();
    $pane->pid = 'new-32673277-4683-4bb5-ae96-9ebee8160df4';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'location_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_menu_parent_node_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '32673277-4683-4bb5-ae96-9ebee8160df4';
    $display->content['new-32673277-4683-4bb5-ae96-9ebee8160df4'] = $pane;
    $display->panels['top'][0] = 'new-32673277-4683-4bb5-ae96-9ebee8160df4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-866b7c76-ae96-438b-ac27-e30942eb05a2';
  $panelizer->display = $display;
  $export['node:static:static_at_this_location'] = $panelizer;

  return $export;
}
