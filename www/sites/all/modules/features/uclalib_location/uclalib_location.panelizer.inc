<?php
/**
 * @file
 * uclalib_location.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function uclalib_location_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:location:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
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
      'identifier' => 'About node',
      'keyword' => 'menu_about_node',
      'name' => 'about_node',
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
  $display->layout = 'sidebar-left-golden';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Common Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'page_header',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'page_header' => array(
        'type' => 'region',
        'title' => 'Page Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 4,
          2 => 5,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => '19.247691640329677',
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'column',
        'width' => '57.92126704427534',
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 7,
          1 => 8,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'column',
        'width' => '22.831041315394984',
        'width_type' => '%',
        'parent' => '2',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_top',
        ),
        'parent' => '4',
        'class' => '',
      ),
      'center_top' => array(
        'type' => 'region',
        'title' => 'Center Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_left',
          1 => 'center_right',
        ),
        'parent' => '4',
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '5',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      'center_left' => array(
        'type' => 'region',
        'title' => 'Center Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      'center_right' => array(
        'type' => 'region',
        'title' => 'Center Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'center' => NULL,
      'page_header' => NULL,
      'left' => NULL,
      'center_top' => NULL,
      'right' => NULL,
      'center_left' => NULL,
      'center_right' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'sidebar_right' => NULL,
      'secondary' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
    ),
    'below_main_left' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c506b0fc-f410-4c68-ae90-23f174420074';
  $display->window_title = '%node:title | %global:site:name';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-405884a6-b10e-4dd6-90d6-36b17d4f1379';
    $pane->panel = 'below_main_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Upcoming Events',
      'body' => 'Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '405884a6-b10e-4dd6-90d6-36b17d4f1379';
    $display->content['new-405884a6-b10e-4dd6-90d6-36b17d4f1379'] = $pane;
    $display->panels['below_main_left'][0] = 'new-405884a6-b10e-4dd6-90d6-36b17d4f1379';
    $pane = new stdClass();
    $pane->pid = 'new-0ee6ed8e-588d-4935-a82b-3207a25d05a8';
    $pane->panel = 'below_main_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'recent_news_highlight-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_news_categories_tid' => '63',
        'field_news_location_target_id' => '1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0ee6ed8e-588d-4935-a82b-3207a25d05a8';
    $display->content['new-0ee6ed8e-588d-4935-a82b-3207a25d05a8'] = $pane;
    $display->panels['below_main_left'][1] = 'new-0ee6ed8e-588d-4935-a82b-3207a25d05a8';
    $pane = new stdClass();
    $pane->pid = 'new-8f2fc0f3-a2fc-4883-9e5a-bacd006b22fb';
    $pane->panel = 'below_main_right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Schedule a Research Appointment',
      'title' => '',
      'body' => '<p><a class="more-link-block" href="/">Schedule a Research Appointment</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'schedule-appointment',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f2fc0f3-a2fc-4883-9e5a-bacd006b22fb';
    $display->content['new-8f2fc0f3-a2fc-4883-9e5a-bacd006b22fb'] = $pane;
    $display->panels['below_main_right'][0] = 'new-8f2fc0f3-a2fc-4883-9e5a-bacd006b22fb';
    $pane = new stdClass();
    $pane->pid = 'new-8eca67af-f582-47cb-8893-99bea98232c1';
    $pane->panel = 'below_main_right';
    $pane->type = 'views_panes';
    $pane->subtype = 'at_this_location_block-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'At this Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8eca67af-f582-47cb-8893-99bea98232c1';
    $display->content['new-8eca67af-f582-47cb-8893-99bea98232c1'] = $pane;
    $display->panels['below_main_right'][1] = 'new-8eca67af-f582-47cb-8893-99bea98232c1';
    $pane = new stdClass();
    $pane->pid = 'new-665a8ad1-61ad-4340-833c-359cbb6f57a1';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'about_this_library-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '%menu_about_node:nid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'location-about',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '665a8ad1-61ad-4340-833c-359cbb6f57a1';
    $display->content['new-665a8ad1-61ad-4340-833c-359cbb6f57a1'] = $pane;
    $display->panels['main'][0] = 'new-665a8ad1-61ad-4340-833c-359cbb6f57a1';
    $pane = new stdClass();
    $pane->pid = 'new-04116a50-5279-4343-88bb-5a0067e72626';
    $pane->panel = 'main';
    $pane->type = 'opening_hours_table';
    $pane->subtype = 'opening_hours_table';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Hours',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '04116a50-5279-4343-88bb-5a0067e72626';
    $display->content['new-04116a50-5279-4343-88bb-5a0067e72626'] = $pane;
    $display->panels['main'][1] = 'new-04116a50-5279-4343-88bb-5a0067e72626';
    $pane = new stdClass();
    $pane->pid = 'new-012ea686-9f07-489f-a902-787035559e8d';
    $pane->panel = 'sidebar_left';
    $pane->type = 'open_now';
    $pane->subtype = 'open_now';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
      'css_class' => 'sidebar-tier-1',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '012ea686-9f07-489f-a902-787035559e8d';
    $display->content['new-012ea686-9f07-489f-a902-787035559e8d'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-012ea686-9f07-489f-a902-787035559e8d';
    $pane = new stdClass();
    $pane->pid = 'new-1b8e24fc-00be-40f5-81c6-7aeb133963d0';
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
    $pane->uuid = '1b8e24fc-00be-40f5-81c6-7aeb133963d0';
    $display->content['new-1b8e24fc-00be-40f5-81c6-7aeb133963d0'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-1b8e24fc-00be-40f5-81c6-7aeb133963d0';
    $pane = new stdClass();
    $pane->pid = 'new-d0b937a2-f5b9-4271-853f-f5374b33e65f';
    $pane->panel = 'sidebar_left';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
        1 => 'empty',
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
    $pane->uuid = 'd0b937a2-f5b9-4271-853f-f5374b33e65f';
    $display->content['new-d0b937a2-f5b9-4271-853f-f5374b33e65f'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-d0b937a2-f5b9-4271-853f-f5374b33e65f';
    $pane = new stdClass();
    $pane->pid = 'new-8d82f0a7-5934-4859-9bbc-3371a855d3b9';
    $pane->panel = 'sidebar_left';
    $pane->type = 'custom';
    $pane->subtype = 'questions_highlight';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-tier-3',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8d82f0a7-5934-4859-9bbc-3371a855d3b9';
    $display->content['new-8d82f0a7-5934-4859-9bbc-3371a855d3b9'] = $pane;
    $display->panels['sidebar_left'][3] = 'new-8d82f0a7-5934-4859-9bbc-3371a855d3b9';
    $pane = new stdClass();
    $pane->pid = 'new-b402df09-6b6f-4584-895e-cda2762c1b48';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'location_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
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
    $pane->uuid = 'b402df09-6b6f-4584-895e-cda2762c1b48';
    $display->content['new-b402df09-6b6f-4584-895e-cda2762c1b48'] = $pane;
    $display->panels['top'][0] = 'new-b402df09-6b6f-4584-895e-cda2762c1b48';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:location:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:location:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'location';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'center_',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '23.81925599739448',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '51.837257795981586',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '24.343486206588132',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'center_' => NULL,
      'right' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bbe52067-0c57-4f7d-85ac-a0e4dccb339b';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8be081fb-9fad-42d0-8598-bf013bc0c5b5';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_map_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image_link_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail_large',
        'image_link' => 'field_location_map_link',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8be081fb-9fad-42d0-8598-bf013bc0c5b5';
    $display->content['new-8be081fb-9fad-42d0-8598-bf013bc0c5b5'] = $pane;
    $display->panels['center'][0] = 'new-8be081fb-9fad-42d0-8598-bf013bc0c5b5';
    $pane = new stdClass();
    $pane->pid = 'new-8de3af29-819a-4718-b3cc-e0604bbf496d';
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
    $pane->uuid = '8de3af29-819a-4718-b3cc-e0604bbf496d';
    $display->content['new-8de3af29-819a-4718-b3cc-e0604bbf496d'] = $pane;
    $display->panels['center_'][0] = 'new-8de3af29-819a-4718-b3cc-e0604bbf496d';
    $pane = new stdClass();
    $pane->pid = 'new-e848d85f-0b60-4345-9d33-d0192e2ba19e';
    $pane->panel = 'center_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_location_building';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e848d85f-0b60-4345-9d33-d0192e2ba19e';
    $display->content['new-e848d85f-0b60-4345-9d33-d0192e2ba19e'] = $pane;
    $display->panels['center_'][1] = 'new-e848d85f-0b60-4345-9d33-d0192e2ba19e';
    $pane = new stdClass();
    $pane->pid = 'new-d1606162-b8ae-4d98-bc39-ee339e4c746f';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd1606162-b8ae-4d98-bc39-ee339e4c746f';
    $display->content['new-d1606162-b8ae-4d98-bc39-ee339e4c746f'] = $pane;
    $display->panels['center_'][2] = 'new-d1606162-b8ae-4d98-bc39-ee339e4c746f';
    $pane = new stdClass();
    $pane->pid = 'new-ed79bfc1-dcc2-42fa-b6c0-a2286e899f2d';
    $pane->panel = 'center_';
    $pane->type = 'todays_hours';
    $pane->subtype = 'todays_hours';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ed79bfc1-dcc2-42fa-b6c0-a2286e899f2d';
    $display->content['new-ed79bfc1-dcc2-42fa-b6c0-a2286e899f2d'] = $pane;
    $display->panels['center_'][3] = 'new-ed79bfc1-dcc2-42fa-b6c0-a2286e899f2d';
    $pane = new stdClass();
    $pane->pid = 'new-f51b51d6-6f17-42cb-ad56-0c944a5edd85';
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
    $pane->uuid = 'f51b51d6-6f17-42cb-ad56-0c944a5edd85';
    $display->content['new-f51b51d6-6f17-42cb-ad56-0c944a5edd85'] = $pane;
    $display->panels['right'][0] = 'new-f51b51d6-6f17-42cb-ad56-0c944a5edd85';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:location:default:teaser'] = $panelizer;

  return $export;
}
