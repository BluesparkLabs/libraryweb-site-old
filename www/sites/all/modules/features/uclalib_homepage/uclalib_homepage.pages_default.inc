<?php
/**
 * @file
 * uclalib_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function uclalib_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'The site\'s homepage.';
  $page->path = 'homepage';
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
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'homepage',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left_main' => NULL,
      'top_left_bottom_left' => NULL,
      'top_left_bottom_right' => NULL,
      'top_left_bottom_after' => NULL,
      'top_right_sidebar' => NULL,
      'bottom_left' => NULL,
      'bottom_right' => NULL,
      'top' => NULL,
    ),
    'top_left_bottom_after' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f17360f4-b63b-4fb3-9811-d091de9826e5';
  $display->window_title = 'Welcome to the UCLA Library';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-97526c73-2b2d-4c6e-b996-4400d4747414';
    $pane->panel = 'top_left_bottom_after';
    $pane->type = 'block';
    $pane->subtype = 'bean-upcoming-events-homepage';
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
    $pane->uuid = '97526c73-2b2d-4c6e-b996-4400d4747414';
    $display->content['new-97526c73-2b2d-4c6e-b996-4400d4747414'] = $pane;
    $display->panels['top_left_bottom_after'][0] = 'new-97526c73-2b2d-4c6e-b996-4400d4747414';
    $pane = new stdClass();
    $pane->pid = 'new-ec681041-0a57-47c4-80dd-9b52a8f3acd4';
    $pane->panel = 'top_left_bottom_after';
    $pane->type = 'block';
    $pane->subtype = 'bean-homepage-news';
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
    $pane->uuid = 'ec681041-0a57-47c4-80dd-9b52a8f3acd4';
    $display->content['new-ec681041-0a57-47c4-80dd-9b52a8f3acd4'] = $pane;
    $display->panels['top_left_bottom_after'][1] = 'new-ec681041-0a57-47c4-80dd-9b52a8f3acd4';
    $pane = new stdClass();
    $pane->pid = 'new-a6495e16-112d-4a6a-9c90-9e8412d95a0a';
    $pane->panel = 'top_left_bottom_left';
    $pane->type = 'todays_hours_master';
    $pane->subtype = 'todays_hours_master';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title_alignment' => 'left',
      ),
      'style' => 'border-blue',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-todays-hours mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a6495e16-112d-4a6a-9c90-9e8412d95a0a';
    $display->content['new-a6495e16-112d-4a6a-9c90-9e8412d95a0a'] = $pane;
    $display->panels['top_left_bottom_left'][0] = 'new-a6495e16-112d-4a6a-9c90-9e8412d95a0a';
    $pane = new stdClass();
    $pane->pid = 'new-54cf3e3c-a95f-484d-8bc8-0a72e3c0e3d2';
    $pane->panel = 'top_left_bottom_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-get-started-at-the-library';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title_alignment' => 'default',
      ),
      'style' => 'border-blue',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54cf3e3c-a95f-484d-8bc8-0a72e3c0e3d2';
    $display->content['new-54cf3e3c-a95f-484d-8bc8-0a72e3c0e3d2'] = $pane;
    $display->panels['top_left_bottom_right'][0] = 'new-54cf3e3c-a95f-484d-8bc8-0a72e3c0e3d2';
    $pane = new stdClass();
    $pane->pid = 'new-b7a1603e-c68e-4a4f-998f-26bae301d717';
    $pane->panel = 'top_left_bottom_right';
    $pane->type = 'block';
    $pane->subtype = 'bean-homepage-equipment-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'title_alignment' => 'left',
      ),
      'style' => 'border-blue',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mobile-collapsible',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7a1603e-c68e-4a4f-998f-26bae301d717';
    $display->content['new-b7a1603e-c68e-4a4f-998f-26bae301d717'] = $pane;
    $display->panels['top_left_bottom_right'][1] = 'new-b7a1603e-c68e-4a4f-998f-26bae301d717';
    $pane = new stdClass();
    $pane->pid = 'new-768d72ca-cc3f-49d5-9995-d55c357ef337';
    $pane->panel = 'top_left_main';
    $pane->type = 'block';
    $pane->subtype = 'ucla_tab_search-ucla_tab_search_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Start your research',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'important-column-heading',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '768d72ca-cc3f-49d5-9995-d55c357ef337';
    $display->content['new-768d72ca-cc3f-49d5-9995-d55c357ef337'] = $pane;
    $display->panels['top_left_main'][0] = 'new-768d72ca-cc3f-49d5-9995-d55c357ef337';
    $pane = new stdClass();
    $pane->pid = 'new-8e8a6115-4373-407e-acf1-8446ecca3ad9';
    $pane->panel = 'top_right_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'bean-homepage-project-highlights';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'important-column-heading',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e8a6115-4373-407e-acf1-8446ecca3ad9';
    $display->content['new-8e8a6115-4373-407e-acf1-8446ecca3ad9'] = $pane;
    $display->panels['top_right_sidebar'][0] = 'new-8e8a6115-4373-407e-acf1-8446ecca3ad9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
