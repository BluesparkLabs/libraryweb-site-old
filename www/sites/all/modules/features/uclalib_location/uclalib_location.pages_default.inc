<?php
/**
 * @file
 * uclalib_location.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_location_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'location_search';
  $page->task = 'page';
  $page->admin_title = 'Location Search';
  $page->admin_description = '';
  $page->path = 'locations';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_location_search_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'location_search';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '72.77374976761479',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '27.2262502323852',
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
      'left' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
      'below_secondary_left' => NULL,
      'below_secondary_right' => NULL,
      'secondary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dd38bd21-67b0-45b2-9142-112e9be83abc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_location_search_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b660eb10-f40d-4530-b572-3bd8f5d8a608';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'UCLA LIbrary Map (PDF)',
    'title' => '',
    'body' => '<p>[[{"fid":"1618","view_mode":"wysiwyg","type":"media","attributes":{"class":"file media-element file-wysiwyg"},"link_text":"Map of All Libraries"}]]</p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b660eb10-f40d-4530-b572-3bd8f5d8a608';
  $display->content['new-b660eb10-f40d-4530-b572-3bd8f5d8a608'] = $pane;
  $display->panels['main'][0] = 'new-b660eb10-f40d-4530-b572-3bd8f5d8a608';
  $pane = new stdClass();
  $pane->pid = 'new-960f21bf-0df1-4b81-a2f1-11fa2320def9';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'location_search-panel_pane_1';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '960f21bf-0df1-4b81-a2f1-11fa2320def9';
  $display->content['new-960f21bf-0df1-4b81-a2f1-11fa2320def9'] = $pane;
  $display->panels['main'][1] = 'new-960f21bf-0df1-4b81-a2f1-11fa2320def9';
  $pane = new stdClass();
  $pane->pid = 'new-599877f3-23df-45c0-b323-189260e0c8b4';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'views-7676abd10308a3844c65d210917a6c50';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-search',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '599877f3-23df-45c0-b323-189260e0c8b4';
  $display->content['new-599877f3-23df-45c0-b323-189260e0c8b4'] = $pane;
  $display->panels['sidebar_left'][0] = 'new-599877f3-23df-45c0-b323-189260e0c8b4';
  $pane = new stdClass();
  $pane->pid = 'new-49114985-024c-4abd-9732-ba10161da3be';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-Fs8j80opdXZsAlAwvlwgKItHc61lc4sd';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '49114985-024c-4abd-9732-ba10161da3be';
  $display->content['new-49114985-024c-4abd-9732-ba10161da3be'] = $pane;
  $display->panels['sidebar_left'][1] = 'new-49114985-024c-4abd-9732-ba10161da3be';
  $pane = new stdClass();
  $pane->pid = 'new-9293e2d9-d1ba-4941-8dbf-564c672d2262';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-bTI1w8Nuhrk7oP24NO1OJO4pkObiIq4G';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Equipment',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-options',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9293e2d9-d1ba-4941-8dbf-564c672d2262';
  $display->content['new-9293e2d9-d1ba-4941-8dbf-564c672d2262'] = $pane;
  $display->panels['sidebar_left'][2] = 'new-9293e2d9-d1ba-4941-8dbf-564c672d2262';
  $pane = new stdClass();
  $pane->pid = 'new-c8003602-8649-4464-b27e-35f54ca2d625';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-lezaXRxGQehgf5TeDb5KW0dKO65R1G6d';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Study Areas',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-options',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c8003602-8649-4464-b27e-35f54ca2d625';
  $display->content['new-c8003602-8649-4464-b27e-35f54ca2d625'] = $pane;
  $display->panels['sidebar_left'][3] = 'new-c8003602-8649-4464-b27e-35f54ca2d625';
  $pane = new stdClass();
  $pane->pid = 'new-0d68534e-9e0e-4801-86e4-61e109d4aeca';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-1ynNBlTvQZV71h2pYFLkyG41OqkbIABs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Amenities',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-options',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0d68534e-9e0e-4801-86e4-61e109d4aeca';
  $display->content['new-0d68534e-9e0e-4801-86e4-61e109d4aeca'] = $pane;
  $display->panels['sidebar_left'][4] = 'new-0d68534e-9e0e-4801-86e4-61e109d4aeca';
  $pane = new stdClass();
  $pane->pid = 'new-4373e830-c487-4ed3-a3b1-3d4133cd4155';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ZYdPWBsFGwiQKrzDoGQYdOl1OO6hCz4Z';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Buildings',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_collapsed' => 1,
    ),
    'style' => 'collapsible',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-options',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4373e830-c487-4ed3-a3b1-3d4133cd4155';
  $display->content['new-4373e830-c487-4ed3-a3b1-3d4133cd4155'] = $pane;
  $display->panels['sidebar_left'][5] = 'new-4373e830-c487-4ed3-a3b1-3d4133cd4155';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-960f21bf-0df1-4b81-a2f1-11fa2320def9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['location_search'] = $page;

  return $pages;

}
