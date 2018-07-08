<?php
/**
 * @file
 * uclalib_staff_directory.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_staff_directory_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_by_location';
  $page->task = 'page';
  $page->admin_title = 'Staff by Location';
  $page->admin_description = '';
  $page->path = 'node/%node/staff';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_staff_by_location__panel_context_53968935-d4b4-4f92-9363-c4ba5ce62412';
  $handler->task = 'page';
  $handler->subtask = 'staff_by_location';
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
    'name' => '',
  );
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
  $display->uuid = '056ff12b-2473-45ec-ac63-224eaa0999db';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_staff_by_location__panel_context_53968935-d4b4-4f92-9363-c4ba5ce62412';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b1f37419-adf0-415d-bcff-8a062162241e';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff-pane_staff_loc';
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
  $pane->uuid = 'b1f37419-adf0-415d-bcff-8a062162241e';
  $display->content['new-b1f37419-adf0-415d-bcff-8a062162241e'] = $pane;
  $display->panels['main'][0] = 'new-b1f37419-adf0-415d-bcff-8a062162241e';
  $pane = new stdClass();
  $pane->pid = 'new-70cf5d62-2052-49dd-a981-7d114da052cd';
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
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '70cf5d62-2052-49dd-a981-7d114da052cd';
  $display->content['new-70cf5d62-2052-49dd-a981-7d114da052cd'] = $pane;
  $display->panels['sidebar_left'][0] = 'new-70cf5d62-2052-49dd-a981-7d114da052cd';
  $pane = new stdClass();
  $pane->pid = 'new-2e47b9f4-1d33-4c25-8b1b-9f1f70efdcb4';
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
  $pane->uuid = '2e47b9f4-1d33-4c25-8b1b-9f1f70efdcb4';
  $display->content['new-2e47b9f4-1d33-4c25-8b1b-9f1f70efdcb4'] = $pane;
  $display->panels['sidebar_left'][1] = 'new-2e47b9f4-1d33-4c25-8b1b-9f1f70efdcb4';
  $pane = new stdClass();
  $pane->pid = 'new-e5b485d1-52d8-4e3b-bf1b-d86084cd249e';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'location_header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
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
  $pane->uuid = 'e5b485d1-52d8-4e3b-bf1b-d86084cd249e';
  $display->content['new-e5b485d1-52d8-4e3b-bf1b-d86084cd249e'] = $pane;
  $display->panels['top'][0] = 'new-e5b485d1-52d8-4e3b-bf1b-d86084cd249e';
  $pane = new stdClass();
  $pane->pid = 'new-e9ff575e-079f-4d9d-ba89-7ce357719063';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'bean-staff-directory-default';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e9ff575e-079f-4d9d-ba89-7ce357719063';
  $display->content['new-e9ff575e-079f-4d9d-ba89-7ce357719063'] = $pane;
  $display->panels['top'][1] = 'new-e9ff575e-079f-4d9d-ba89-7ce357719063';
  $pane = new stdClass();
  $pane->pid = 'new-c4b95db3-d137-440a-abbf-cd78a474c6f1';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'bean-powell-library-gallery---inqdesk';
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
  $pane->uuid = 'c4b95db3-d137-440a-abbf-cd78a474c6f1';
  $display->content['new-c4b95db3-d137-440a-abbf-cd78a474c6f1'] = $pane;
  $display->panels['top'][2] = 'new-c4b95db3-d137-440a-abbf-cd78a474c6f1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b1f37419-adf0-415d-bcff-8a062162241e';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_by_location'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_departments';
  $page->task = 'page';
  $page->admin_title = 'Staff Directory';
  $page->admin_description = 'Staff directory panel';
  $page->path = 'taxonomy/term/%dept/staff/!lasti';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'dept' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          9 => '9',
          14 => 0,
          15 => 0,
          11 => 0,
          17 => 0,
          19 => 0,
          5 => 0,
          6 => 0,
          1 => 0,
          2 => 0,
          3 => 0,
          12 => 0,
          13 => 0,
          7 => 0,
          18 => 0,
          8 => 0,
          10 => 0,
          16 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
    'lasti' => array(
      'id' => 1,
      'identifier' => 'lasti',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_staff_departments__panelizer_node_e1525456-be51-47e5-92d7-7eaf5682f77a';
  $handler->task = 'page';
  $handler->subtask = 'staff_departments';
  $handler->handler = 'panelizer_node';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panelizer',
    'contexts' => array(),
    'relationships' => array(),
    'context' => 'argument_term_1',
    'name' => '',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_departments'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'staff_directory';
  $page->task = 'page';
  $page->admin_title = 'Staff Directory';
  $page->admin_description = 'Staff directory panel';
  $page->path = 'staff/!dept/!lasti';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'dept' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          9 => '9',
          14 => 0,
          15 => 0,
          11 => 0,
          17 => 0,
          19 => 0,
          5 => 0,
          6 => 0,
          1 => 0,
          2 => 0,
          3 => 0,
          12 => 0,
          13 => 0,
          7 => 0,
          18 => 0,
          8 => 0,
          10 => 0,
          16 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
    'lasti' => array(
      'id' => 1,
      'identifier' => 'lasti',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_staff_directory_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'staff_directory';
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
  $display->uuid = 'b6845ffe-955f-4c42-9a20-5cd2a00c4bd4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_staff_directory_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7f41c543-f595-485a-8041-d0045e0a6cf5';
  $pane->panel = 'below_main_left';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff-staff_loc_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '0',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'query_string_exists',
        'settings' => array(
          'key' => 'search_api_views_fulltext',
        ),
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'staff/*',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f41c543-f595-485a-8041-d0045e0a6cf5';
  $display->content['new-7f41c543-f595-485a-8041-d0045e0a6cf5'] = $pane;
  $display->panels['below_main_left'][0] = 'new-7f41c543-f595-485a-8041-d0045e0a6cf5';
  $pane = new stdClass();
  $pane->pid = 'new-b716b06f-3052-429d-9278-609257cc3cf9';
  $pane->panel = 'below_main_right';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_department-departments';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '0',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'query_string_exists',
        'settings' => array(
          'key' => 'search_api_views_fulltext',
        ),
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '0',
          'paths' => 'staff/*',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b716b06f-3052-429d-9278-609257cc3cf9';
  $display->content['new-b716b06f-3052-429d-9278-609257cc3cf9'] = $pane;
  $display->panels['below_main_right'][0] = 'new-b716b06f-3052-429d-9278-609257cc3cf9';
  $pane = new stdClass();
  $pane->pid = 'new-96336e86-e625-4d11-b2a2-9cbf0ef99730';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_department-department_body';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96336e86-e625-4d11-b2a2-9cbf0ef99730';
  $display->content['new-96336e86-e625-4d11-b2a2-9cbf0ef99730'] = $pane;
  $display->panels['main'][0] = 'new-96336e86-e625-4d11-b2a2-9cbf0ef99730';
  $pane = new stdClass();
  $pane->pid = 'new-83a80e03-5f6c-478f-8d34-af6ca1ac0866';
  $pane->panel = 'main';
  $pane->type = 'views';
  $pane->subtype = 'staff_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'query_string_exists',
        'settings' => array(
          'key' => 'search_api_views_fulltext',
        ),
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '30',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => 'staff',
    'display' => 'default',
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
  $pane->uuid = '83a80e03-5f6c-478f-8d34-af6ca1ac0866';
  $display->content['new-83a80e03-5f6c-478f-8d34-af6ca1ac0866'] = $pane;
  $display->panels['main'][1] = 'new-83a80e03-5f6c-478f-8d34-af6ca1ac0866';
  $pane = new stdClass();
  $pane->pid = 'new-46f6afec-e439-43a9-9a3e-03932a3749b5';
  $pane->panel = 'main';
  $pane->type = 'views';
  $pane->subtype = 'staff';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'attachment_glossary',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '46f6afec-e439-43a9-9a3e-03932a3749b5';
  $display->content['new-46f6afec-e439-43a9-9a3e-03932a3749b5'] = $pane;
  $display->panels['main'][2] = 'new-46f6afec-e439-43a9-9a3e-03932a3749b5';
  $pane = new stdClass();
  $pane->pid = 'new-310f3095-20e5-4904-9a23-2fb222303301';
  $pane->panel = 'main';
  $pane->type = 'views';
  $pane->subtype = 'staff_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'string_length',
        'settings' => array(
          'operator' => '=',
          'length' => '1',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'query_string_exists',
        'settings' => array(
          'key' => 'search_api_views_fulltext',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '30',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => 'staff',
    'display' => 'default',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '310f3095-20e5-4904-9a23-2fb222303301';
  $display->content['new-310f3095-20e5-4904-9a23-2fb222303301'] = $pane;
  $display->panels['main'][3] = 'new-310f3095-20e5-4904-9a23-2fb222303301';
  $pane = new stdClass();
  $pane->pid = 'new-d56a1ab7-4e11-465d-b7c9-ece4b44c46b5';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff-pane_staff_dept';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd56a1ab7-4e11-465d-b7c9-ece4b44c46b5';
  $display->content['new-d56a1ab7-4e11-465d-b7c9-ece4b44c46b5'] = $pane;
  $display->panels['main'][4] = 'new-d56a1ab7-4e11-465d-b7c9-ece4b44c46b5';
  $pane = new stdClass();
  $pane->pid = 'new-344cb151-4649-470b-9d69-6073ee9c2d9d';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '344cb151-4649-470b-9d69-6073ee9c2d9d';
  $display->content['new-344cb151-4649-470b-9d69-6073ee9c2d9d'] = $pane;
  $display->panels['sidebar_left'][0] = 'new-344cb151-4649-470b-9d69-6073ee9c2d9d';
  $pane = new stdClass();
  $pane->pid = 'new-3fb152d8-6fac-4659-8079-1892c562ee6c';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'staff_department-department_title';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3fb152d8-6fac-4659-8079-1892c562ee6c';
  $display->content['new-3fb152d8-6fac-4659-8079-1892c562ee6c'] = $pane;
  $display->panels['top'][0] = 'new-3fb152d8-6fac-4659-8079-1892c562ee6c';
  $pane = new stdClass();
  $pane->pid = 'new-a30738d9-9784-4f40-8577-b53d140f0050';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a30738d9-9784-4f40-8577-b53d140f0050';
  $display->content['new-a30738d9-9784-4f40-8577-b53d140f0050'] = $pane;
  $display->panels['top'][1] = 'new-a30738d9-9784-4f40-8577-b53d140f0050';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['staff_directory'] = $page;

  return $pages;

}
