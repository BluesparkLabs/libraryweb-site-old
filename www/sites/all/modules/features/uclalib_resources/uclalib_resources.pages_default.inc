<?php
/**
 * @file
 * uclalib_resources.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function uclalib_resources_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -96;
  $handler->conf = array(
    'title' => 'Resource',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Global',
        'keyword' => 'global',
        'name' => 'token',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'uclalib_resources' => 'uclalib_resources',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sidebar-left-right';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar_left' => NULL,
      'sidebar_right' => NULL,
      'main' => NULL,
      'below_main_left' => NULL,
      'below_main_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4cb43c28-3561-48ef-8fc4-0cd81362854b';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11853b62-fd78-4663-ba68-dbaa6d9d3071';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Access the Resource',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11853b62-fd78-4663-ba68-dbaa6d9d3071';
    $display->content['new-11853b62-fd78-4663-ba68-dbaa6d9d3071'] = $pane;
    $display->panels['main'][0] = 'new-11853b62-fd78-4663-ba68-dbaa6d9d3071';
    $pane = new stdClass();
    $pane->pid = 'new-fd91bd14-f008-495c-b126-95e5a3e6c5c1';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_other_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'fd91bd14-f008-495c-b126-95e5a3e6c5c1';
    $display->content['new-fd91bd14-f008-495c-b126-95e5a3e6c5c1'] = $pane;
    $display->panels['main'][1] = 'new-fd91bd14-f008-495c-b126-95e5a3e6c5c1';
    $pane = new stdClass();
    $pane->pid = 'new-ed141842-3831-45fd-b913-4fb130371871';
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
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
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
    $pane->uuid = 'ed141842-3831-45fd-b913-4fb130371871';
    $display->content['new-ed141842-3831-45fd-b913-4fb130371871'] = $pane;
    $display->panels['main'][2] = 'new-ed141842-3831-45fd-b913-4fb130371871';
    $pane = new stdClass();
    $pane->pid = 'new-3168d230-0b88-4ab2-ac31-a758651b164d';
    $pane->panel = 'sidebar_left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_image_thumbnail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'thumbnail',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '3168d230-0b88-4ab2-ac31-a758651b164d';
    $display->content['new-3168d230-0b88-4ab2-ac31-a758651b164d'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-3168d230-0b88-4ab2-ac31-a758651b164d';
    $pane = new stdClass();
    $pane->pid = 'new-78f1a6d9-a4fd-4e4c-88d7-1ad0f3ebfc0e';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '78f1a6d9-a4fd-4e4c-88d7-1ad0f3ebfc0e';
    $display->content['new-78f1a6d9-a4fd-4e4c-88d7-1ad0f3ebfc0e'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-78f1a6d9-a4fd-4e4c-88d7-1ad0f3ebfc0e';
    $pane = new stdClass();
    $pane->pid = 'new-412271ce-c7fa-4537-80c1-3d8c7214b0ce';
    $pane->panel = 'sidebar_right';
    $pane->type = 'views';
    $pane->subtype = 'resource_category_search_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Category',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '412271ce-c7fa-4537-80c1-3d8c7214b0ce';
    $display->content['new-412271ce-c7fa-4537-80c1-3d8c7214b0ce'] = $pane;
    $display->panels['sidebar_right'][0] = 'new-412271ce-c7fa-4537-80c1-3d8c7214b0ce';
    $pane = new stdClass();
    $pane->pid = 'new-73397aba-0a28-4cb9-9845-ff7f543a5fd1';
    $pane->panel = 'sidebar_right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_associated_loc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_views_formatter',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_name' => 'location_name_address',
        'view_display' => 'default',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Location',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '73397aba-0a28-4cb9-9845-ff7f543a5fd1';
    $display->content['new-73397aba-0a28-4cb9-9845-ff7f543a5fd1'] = $pane;
    $display->panels['sidebar_right'][1] = 'new-73397aba-0a28-4cb9-9845-ff7f543a5fd1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3168d230-0b88-4ab2-ac31-a758651b164d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_resources_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'find_resources';
  $page->task = 'page';
  $page->admin_title = 'Find Resources';
  $page->admin_description = '';
  $page->path = 'search-research/find-resources';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => 'Find Resources',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_find_resources_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'find_resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->uuid = 'f3aba30e-34c1-4e4e-9eec-7f4025191d81';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-50051ca8-f610-4976-99c2-94b3e38ea7c9';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Find Resources help text',
      'title' => '',
      'body' => '<div>
	Use the filters and major resources below to locate materials at UCLA and beyond by resource category. Need help? Ask a Librarian, request a research appointment or consult our subject research guides.</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background-gray',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50051ca8-f610-4976-99c2-94b3e38ea7c9';
    $display->content['new-50051ca8-f610-4976-99c2-94b3e38ea7c9'] = $pane;
    $display->panels['main'][0] = 'new-50051ca8-f610-4976-99c2-94b3e38ea7c9';
    $pane = new stdClass();
    $pane->pid = 'new-6c81f542-dcac-4074-9057-9d5285569e44';
    $pane->panel = 'main';
    $pane->type = 'views_panes';
    $pane->subtype = 'find_resources-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6c81f542-dcac-4074-9057-9d5285569e44';
    $display->content['new-6c81f542-dcac-4074-9057-9d5285569e44'] = $pane;
    $display->panels['main'][1] = 'new-6c81f542-dcac-4074-9057-9d5285569e44';
    $pane = new stdClass();
    $pane->pid = 'new-d258b9b3-a74a-4221-bcf1-817dfb941deb';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'views-5c1ce6982df22f97f7bbd1528ab7941e';
    $pane->shown = FALSE;
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
    $pane->uuid = 'd258b9b3-a74a-4221-bcf1-817dfb941deb';
    $display->content['new-d258b9b3-a74a-4221-bcf1-817dfb941deb'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-d258b9b3-a74a-4221-bcf1-817dfb941deb';
    $pane = new stdClass();
    $pane->pid = 'new-a6789fc8-4412-490e-bfa6-54046cf92d01';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yGCiWGt1LRTtDT1KHYCJM0SxGO16YGtV';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Resource Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'sidebar-options',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a6789fc8-4412-490e-bfa6-54046cf92d01';
    $display->content['new-a6789fc8-4412-490e-bfa6-54046cf92d01'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-a6789fc8-4412-490e-bfa6-54046cf92d01';
    $pane = new stdClass();
    $pane->pid = 'new-be86c4ea-95f2-4b9b-a0a6-b23f97a5671b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Find Resources Horizontal Tab Navigation',
      'title' => '',
      'body' => '<p>Get help with your research | <a href="/locations?f[0]=field_study_areas&#37;3A34">Find a quiet Study Area</a> | <a href="/locations?f[0]=field_study_areas&#37;3A36">Find a Group Study Area</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-horizontal-tab-navigation',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'be86c4ea-95f2-4b9b-a0a6-b23f97a5671b';
    $display->content['new-be86c4ea-95f2-4b9b-a0a6-b23f97a5671b'] = $pane;
    $display->panels['top'][0] = 'new-be86c4ea-95f2-4b9b-a0a6-b23f97a5671b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['find_resources'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_and_research';
  $page->task = 'page';
  $page->admin_title = 'Search and Research';
  $page->admin_description = 'Search and Research landing page.';
  $page->path = 'search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Search',
    'name' => 'main-menu',
    'weight' => '-50',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_and_research_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'search_and_research';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Search';
  $display->uuid = '82948aaa-79af-4cbf-9193-5d2281e060f0';
  $display->window_title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9fe9f04e-94f9-41a3-bc09-5d00b7120cef';
    $pane->panel = 'below_main_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-books--more';
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
    $pane->uuid = '9fe9f04e-94f9-41a3-bc09-5d00b7120cef';
    $display->content['new-9fe9f04e-94f9-41a3-bc09-5d00b7120cef'] = $pane;
    $display->panels['below_main_left'][0] = 'new-9fe9f04e-94f9-41a3-bc09-5d00b7120cef';
    $pane = new stdClass();
    $pane->pid = 'new-daf82f2e-98b3-49d6-b6ad-0d4c9c74af04';
    $pane->panel = 'below_main_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-articles';
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
    $pane->uuid = 'daf82f2e-98b3-49d6-b6ad-0d4c9c74af04';
    $display->content['new-daf82f2e-98b3-49d6-b6ad-0d4c9c74af04'] = $pane;
    $display->panels['below_main_left'][1] = 'new-daf82f2e-98b3-49d6-b6ad-0d4c9c74af04';
    $pane = new stdClass();
    $pane->pid = 'new-5ac686e7-f4ef-4591-b8e4-45af698b6e97';
    $pane->panel = 'below_main_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-images-audio-video';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5ac686e7-f4ef-4591-b8e4-45af698b6e97';
    $display->content['new-5ac686e7-f4ef-4591-b8e4-45af698b6e97'] = $pane;
    $display->panels['below_main_left'][2] = 'new-5ac686e7-f4ef-4591-b8e4-45af698b6e97';
    $pane = new stdClass();
    $pane->pid = 'new-f6f0f01b-e22f-4cee-8aa0-e23b7bf9f8fb';
    $pane->panel = 'below_main_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-journals';
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
    $pane->uuid = 'f6f0f01b-e22f-4cee-8aa0-e23b7bf9f8fb';
    $display->content['new-f6f0f01b-e22f-4cee-8aa0-e23b7bf9f8fb'] = $pane;
    $display->panels['below_main_right'][0] = 'new-f6f0f01b-e22f-4cee-8aa0-e23b7bf9f8fb';
    $pane = new stdClass();
    $pane->pid = 'new-cfe87fc2-0729-455a-a2dd-85479f72c535';
    $pane->panel = 'below_main_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-databases';
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
    $pane->uuid = 'cfe87fc2-0729-455a-a2dd-85479f72c535';
    $display->content['new-cfe87fc2-0729-455a-a2dd-85479f72c535'] = $pane;
    $display->panels['below_main_right'][1] = 'new-cfe87fc2-0729-455a-a2dd-85479f72c535';
    $pane = new stdClass();
    $pane->pid = 'new-b4ea2047-73bd-45a9-9396-fa5016bea0dc';
    $pane->panel = 'below_main_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-popular-databases';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b4ea2047-73bd-45a9-9396-fa5016bea0dc';
    $display->content['new-b4ea2047-73bd-45a9-9396-fa5016bea0dc'] = $pane;
    $display->panels['below_main_right'][2] = 'new-b4ea2047-73bd-45a9-9396-fa5016bea0dc';
    $pane = new stdClass();
    $pane->pid = 'new-edeb57f4-5fd0-474f-8625-96e2842893c5';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div>
	Need help with your research? <a href="">Ask a Librarian</a>, <a href="">request a research appointment</a> or consult our <a href="">subject research guides</a>.
</div>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'background-gray',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-research-help',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'edeb57f4-5fd0-474f-8625-96e2842893c5';
    $display->content['new-edeb57f4-5fd0-474f-8625-96e2842893c5'] = $pane;
    $display->panels['main'][0] = 'new-edeb57f4-5fd0-474f-8625-96e2842893c5';
    $pane = new stdClass();
    $pane->pid = 'new-9e0535de-ad85-48c3-8a56-400471e6bc33';
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
    $pane->uuid = '9e0535de-ad85-48c3-8a56-400471e6bc33';
    $display->content['new-9e0535de-ad85-48c3-8a56-400471e6bc33'] = $pane;
    $display->panels['sidebar_left'][0] = 'new-9e0535de-ad85-48c3-8a56-400471e6bc33';
    $pane = new stdClass();
    $pane->pid = 'new-5496c18e-3154-490a-894d-cd03b4a3d048';
    $pane->panel = 'sidebar_left';
    $pane->type = 'block';
    $pane->subtype = 'bean-quick-links---search-and-researc';
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
      'css_class' => 'sidebar-tier-2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5496c18e-3154-490a-894d-cd03b4a3d048';
    $display->content['new-5496c18e-3154-490a-894d-cd03b4a3d048'] = $pane;
    $display->panels['sidebar_left'][1] = 'new-5496c18e-3154-490a-894d-cd03b4a3d048';
    $pane = new stdClass();
    $pane->pid = 'new-9e967b27-4294-4c0a-827d-9ad66ce657d5';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9e967b27-4294-4c0a-827d-9ad66ce657d5';
    $display->content['new-9e967b27-4294-4c0a-827d-9ad66ce657d5'] = $pane;
    $display->panels['sidebar_left'][2] = 'new-9e967b27-4294-4c0a-827d-9ad66ce657d5';
    $pane = new stdClass();
    $pane->pid = 'new-af77c152-9f04-4996-8178-116d7181aa11';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="">Get help with your research</a> | <a href="">Find a Quiet Study Area</a> | <a href="">Find a Group Study Area</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'search-research-nav',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af77c152-9f04-4996-8178-116d7181aa11';
    $display->content['new-af77c152-9f04-4996-8178-116d7181aa11'] = $pane;
    $display->panels['top'][0] = 'new-af77c152-9f04-4996-8178-116d7181aa11';
    $pane = new stdClass();
    $pane->pid = 'new-aca77090-7d63-40bf-b98a-c8fef3b453f7';
    $pane->panel = 'top';
    $pane->type = 'resources_search_pane';
    $pane->subtype = 'resources_search_pane';
    $pane->shown = FALSE;
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
    $pane->uuid = 'aca77090-7d63-40bf-b98a-c8fef3b453f7';
    $display->content['new-aca77090-7d63-40bf-b98a-c8fef3b453f7'] = $pane;
    $display->panels['top'][1] = 'new-aca77090-7d63-40bf-b98a-c8fef3b453f7';
    $pane = new stdClass();
    $pane->pid = 'new-7f17293f-9e7a-4b39-b6c4-3060fa08a883';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'bean-search-living-library';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7f17293f-9e7a-4b39-b6c4-3060fa08a883';
    $display->content['new-7f17293f-9e7a-4b39-b6c4-3060fa08a883'] = $pane;
    $display->panels['top'][2] = 'new-7f17293f-9e7a-4b39-b6c4-3060fa08a883';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_and_research'] = $page;

  return $pages;

}
