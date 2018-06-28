<?php
/**
 * @file
 * uclalib_location.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function uclalib_location_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'location_header';
  $mini->category = '';
  $mini->admin_title = 'Location Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '20dc64cb-2827-4472-9588-d005653aa9fc';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'location_header';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0677b681-c039-44da-9280-48e419ae6b64';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '0677b681-c039-44da-9280-48e419ae6b64';
  $display->content['new-0677b681-c039-44da-9280-48e419ae6b64'] = $pane;
  $display->panels['middle'][0] = 'new-0677b681-c039-44da-9280-48e419ae6b64';
  $pane = new stdClass();
  $pane->pid = 'new-8d1b75a2-e46b-4948-9d90-889874c03df3';
  $pane->panel = 'middle';
  $pane->type = 'location_contact';
  $pane->subtype = 'location_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-location-contact--inline',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8d1b75a2-e46b-4948-9d90-889874c03df3';
  $display->content['new-8d1b75a2-e46b-4948-9d90-889874c03df3'] = $pane;
  $display->panels['middle'][1] = 'new-8d1b75a2-e46b-4948-9d90-889874c03df3';
  $pane = new stdClass();
  $pane->pid = 'new-927eedf1-0c3d-41d2-b4dc-bb0f32e9861c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_location_social_links';
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
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = '927eedf1-0c3d-41d2-b4dc-bb0f32e9861c';
  $display->content['new-927eedf1-0c3d-41d2-b4dc-bb0f32e9861c'] = $pane;
  $display->panels['middle'][2] = 'new-927eedf1-0c3d-41d2-b4dc-bb0f32e9861c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0677b681-c039-44da-9280-48e419ae6b64';
  $mini->display = $display;
  $export['location_header'] = $mini;

  return $export;
}
