<?php
/**
 * @file
 * uclalib_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uclalib_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access advanced_link autocomplete'.
  $permissions['access advanced_link autocomplete'] = array(
    'name' => 'access advanced_link autocomplete',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Hours' => 'Hours',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'advanced_link',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'admin_dev' => 'admin_dev',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'navbar',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer alerts settings'.
  $permissions['administer alerts settings'] = array(
    'name' => 'administer alerts settings',
    'roles' => array(
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'site_alert',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer cer settings'.
  $permissions['administer cer settings'] = array(
    'name' => 'administer cer settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cer',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer entity view modes'.
  $permissions['administer entity view modes'] = array(
    'name' => 'administer entity view modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_view_mode',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer fancybox'.
  $permissions['administer fancybox'] = array(
    'name' => 'administer fancybox',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fancybox',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer icons'.
  $permissions['administer icons'] = array(
    'name' => 'administer icons',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'icon',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer linkit'.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer multifield'.
  $permissions['administer multifield'] = array(
    'name' => 'administer multifield',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'multifield',
  );

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer opening hours configuration'.
  $permissions['administer opening hours configuration'] = array(
    'name' => 'administer opening hours configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'opening_hours',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean featured_content defaults'.
  $permissions['administer panelizer bean featured_content defaults'] = array(
    'name' => 'administer panelizer bean featured_content defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean link_list defaults'.
  $permissions['administer panelizer bean link_list defaults'] = array(
    'name' => 'administer panelizer bean link_list defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean living_library_gallery defaults'.
  $permissions['administer panelizer bean living_library_gallery defaults'] = array(
    'name' => 'administer panelizer bean living_library_gallery defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean news_and_events_bean content'.
  $permissions['administer panelizer bean news_and_events_bean content'] = array(
    'name' => 'administer panelizer bean news_and_events_bean content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean news_and_events_bean context'.
  $permissions['administer panelizer bean news_and_events_bean context'] = array(
    'name' => 'administer panelizer bean news_and_events_bean context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean news_and_events_bean defaults'.
  $permissions['administer panelizer bean news_and_events_bean defaults'] = array(
    'name' => 'administer panelizer bean news_and_events_bean defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean news_and_events_bean layout'.
  $permissions['administer panelizer bean news_and_events_bean layout'] = array(
    'name' => 'administer panelizer bean news_and_events_bean layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean news_and_events_bean overview'.
  $permissions['administer panelizer bean news_and_events_bean overview'] = array(
    'name' => 'administer panelizer bean news_and_events_bean overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean news_and_events_bean settings'.
  $permissions['administer panelizer bean news_and_events_bean settings'] = array(
    'name' => 'administer panelizer bean news_and_events_bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean quick_find defaults'.
  $permissions['administer panelizer bean quick_find defaults'] = array(
    'name' => 'administer panelizer bean quick_find defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean showcase content'.
  $permissions['administer panelizer bean showcase content'] = array(
    'name' => 'administer panelizer bean showcase content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean showcase context'.
  $permissions['administer panelizer bean showcase context'] = array(
    'name' => 'administer panelizer bean showcase context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean showcase defaults'.
  $permissions['administer panelizer bean showcase defaults'] = array(
    'name' => 'administer panelizer bean showcase defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean showcase layout'.
  $permissions['administer panelizer bean showcase layout'] = array(
    'name' => 'administer panelizer bean showcase layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean showcase overview'.
  $permissions['administer panelizer bean showcase overview'] = array(
    'name' => 'administer panelizer bean showcase overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean showcase settings'.
  $permissions['administer panelizer bean showcase settings'] = array(
    'name' => 'administer panelizer bean showcase settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean text_block defaults'.
  $permissions['administer panelizer bean text_block defaults'] = array(
    'name' => 'administer panelizer bean text_block defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean upcoming_events defaults'.
  $permissions['administer panelizer bean upcoming_events defaults'] = array(
    'name' => 'administer panelizer bean upcoming_events defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer bean upcoming_news defaults'.
  $permissions['administer panelizer bean upcoming_news defaults'] = array(
    'name' => 'administer panelizer bean upcoming_news defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node destination content'.
  $permissions['administer panelizer node destination content'] = array(
    'name' => 'administer panelizer node destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node destination context'.
  $permissions['administer panelizer node destination context'] = array(
    'name' => 'administer panelizer node destination context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node destination defaults'.
  $permissions['administer panelizer node destination defaults'] = array(
    'name' => 'administer panelizer node destination defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node destination layout'.
  $permissions['administer panelizer node destination layout'] = array(
    'name' => 'administer panelizer node destination layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node destination overview'.
  $permissions['administer panelizer node destination overview'] = array(
    'name' => 'administer panelizer node destination overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node destination settings'.
  $permissions['administer panelizer node destination settings'] = array(
    'name' => 'administer panelizer node destination settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node exhibition defaults'.
  $permissions['administer panelizer node exhibition defaults'] = array(
    'name' => 'administer panelizer node exhibition defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node location content'.
  $permissions['administer panelizer node location content'] = array(
    'name' => 'administer panelizer node location content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node location context'.
  $permissions['administer panelizer node location context'] = array(
    'name' => 'administer panelizer node location context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node location defaults'.
  $permissions['administer panelizer node location defaults'] = array(
    'name' => 'administer panelizer node location defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node location layout'.
  $permissions['administer panelizer node location layout'] = array(
    'name' => 'administer panelizer node location layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node location overview'.
  $permissions['administer panelizer node location overview'] = array(
    'name' => 'administer panelizer node location overview',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node location settings'.
  $permissions['administer panelizer node location settings'] = array(
    'name' => 'administer panelizer node location settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
    'name' => 'administer panelizer node news defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node staff_profile defaults'.
  $permissions['administer panelizer node staff_profile defaults'] = array(
    'name' => 'administer panelizer node staff_profile defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node static content'.
  $permissions['administer panelizer node static content'] = array(
    'name' => 'administer panelizer node static content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node static context'.
  $permissions['administer panelizer node static context'] = array(
    'name' => 'administer panelizer node static context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node static defaults'.
  $permissions['administer panelizer node static defaults'] = array(
    'name' => 'administer panelizer node static defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node static layout'.
  $permissions['administer panelizer node static layout'] = array(
    'name' => 'administer panelizer node static layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node static overview'.
  $permissions['administer panelizer node static overview'] = array(
    'name' => 'administer panelizer node static overview',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node static settings'.
  $permissions['administer panelizer node static settings'] = array(
    'name' => 'administer panelizer node static settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_event defaults'.
  $permissions['administer panelizer node uclalib_event defaults'] = array(
    'name' => 'administer panelizer node uclalib_event defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_resources content'.
  $permissions['administer panelizer node uclalib_resources content'] = array(
    'name' => 'administer panelizer node uclalib_resources content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_resources context'.
  $permissions['administer panelizer node uclalib_resources context'] = array(
    'name' => 'administer panelizer node uclalib_resources context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_resources defaults'.
  $permissions['administer panelizer node uclalib_resources defaults'] = array(
    'name' => 'administer panelizer node uclalib_resources defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_resources layout'.
  $permissions['administer panelizer node uclalib_resources layout'] = array(
    'name' => 'administer panelizer node uclalib_resources layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_resources overview'.
  $permissions['administer panelizer node uclalib_resources overview'] = array(
    'name' => 'administer panelizer node uclalib_resources overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node uclalib_resources settings'.
  $permissions['administer panelizer node uclalib_resources settings'] = array(
    'name' => 'administer panelizer node uclalib_resources settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform content'.
  $permissions['administer panelizer node webform content'] = array(
    'name' => 'administer panelizer node webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform context'.
  $permissions['administer panelizer node webform context'] = array(
    'name' => 'administer panelizer node webform context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform layout'.
  $permissions['administer panelizer node webform layout'] = array(
    'name' => 'administer panelizer node webform layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform overview'.
  $permissions['administer panelizer node webform overview'] = array(
    'name' => 'administer panelizer node webform overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform settings'.
  $permissions['administer panelizer node webform settings'] = array(
    'name' => 'administer panelizer node webform settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term academic_departmental_liaison defaults'.
  $permissions['administer panelizer taxonomy_term academic_departmental_liaison defaults'] = array(
    'name' => 'administer panelizer taxonomy_term academic_departmental_liaison defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term audience defaults'.
  $permissions['administer panelizer taxonomy_term audience defaults'] = array(
    'name' => 'administer panelizer taxonomy_term audience defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term events_and_exhibitions_series defaults'.
  $permissions['administer panelizer taxonomy_term events_and_exhibitions_series defaults'] = array(
    'name' => 'administer panelizer taxonomy_term events_and_exhibitions_series defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term events_categories defaults'.
  $permissions['administer panelizer taxonomy_term events_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term events_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term location_amenities defaults'.
  $permissions['administer panelizer taxonomy_term location_amenities defaults'] = array(
    'name' => 'administer panelizer taxonomy_term location_amenities defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term location_equipment defaults'.
  $permissions['administer panelizer taxonomy_term location_equipment defaults'] = array(
    'name' => 'administer panelizer taxonomy_term location_equipment defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term location_study_areas defaults'.
  $permissions['administer panelizer taxonomy_term location_study_areas defaults'] = array(
    'name' => 'administer panelizer taxonomy_term location_study_areas defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term news_categories defaults'.
  $permissions['administer panelizer taxonomy_term news_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term news_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term resource_categories defaults'.
  $permissions['administer panelizer taxonomy_term resource_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term resource_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term staff_departments defaults'.
  $permissions['administer panelizer taxonomy_term staff_departments defaults'] = array(
    'name' => 'administer panelizer taxonomy_term staff_departments defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term staff_subject_areas defaults'.
  $permissions['administer panelizer taxonomy_term staff_subject_areas defaults'] = array(
    'name' => 'administer panelizer taxonomy_term staff_subject_areas defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer schedule source'.
  $permissions['administer schedule source'] = array(
    'name' => 'administer schedule source',
    'roles' => array(
      'Schedule Source Admin' => 'Schedule Source Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'schedule_source_config',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer shibboleth authentication'.
  $permissions['administer shibboleth authentication'] = array(
    'name' => 'administer shibboleth authentication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shib_auth',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer tipsy'.
  $permissions['administer tipsy'] = array(
    'name' => 'administer tipsy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tipsy',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear ccle_redirects_importer feeds'.
  $permissions['clear ccle_redirects_importer feeds'] = array(
    'name' => 'clear ccle_redirects_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear node feeds'.
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear user feeds'.
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create any featured_content bean'.
  $permissions['create any featured_content bean'] = array(
    'name' => 'create any featured_content bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any link_list bean'.
  $permissions['create any link_list bean'] = array(
    'name' => 'create any link_list bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any living_library_gallery bean'.
  $permissions['create any living_library_gallery bean'] = array(
    'name' => 'create any living_library_gallery bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any news_and_events_bean bean'.
  $permissions['create any news_and_events_bean bean'] = array(
    'name' => 'create any news_and_events_bean bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any quick_find bean'.
  $permissions['create any quick_find bean'] = array(
    'name' => 'create any quick_find bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any showcase bean'.
  $permissions['create any showcase bean'] = array(
    'name' => 'create any showcase bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any text_block bean'.
  $permissions['create any text_block bean'] = array(
    'name' => 'create any text_block bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any upcoming_events bean'.
  $permissions['create any upcoming_events bean'] = array(
    'name' => 'create any upcoming_events bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any upcoming_news bean'.
  $permissions['create any upcoming_news bean'] = array(
    'name' => 'create any upcoming_news bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create data content'.
  $permissions['create data content'] = array(
    'name' => 'create data content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create destination content'.
  $permissions['create destination content'] = array(
    'name' => 'create destination content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create exhibition content'.
  $permissions['create exhibition content'] = array(
    'name' => 'create exhibition content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create location content'.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create staff_profile content'.
  $permissions['create staff_profile content'] = array(
    'name' => 'create staff_profile content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create static content'.
  $permissions['create static content'] = array(
    'name' => 'create static content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create uclalib_event content'.
  $permissions['create uclalib_event content'] = array(
    'name' => 'create uclalib_event content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create uclalib_resources content'.
  $permissions['create uclalib_resources content'] = array(
    'name' => 'create uclalib_resources content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any data content'.
  $permissions['delete any data content'] = array(
    'name' => 'delete any data content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any destination content'.
  $permissions['delete any destination content'] = array(
    'name' => 'delete any destination content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any exhibition content'.
  $permissions['delete any exhibition content'] = array(
    'name' => 'delete any exhibition content',
    'roles' => array(
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_content bean'.
  $permissions['delete any featured_content bean'] = array(
    'name' => 'delete any featured_content bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any link_list bean'.
  $permissions['delete any link_list bean'] = array(
    'name' => 'delete any link_list bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any living_library_gallery bean'.
  $permissions['delete any living_library_gallery bean'] = array(
    'name' => 'delete any living_library_gallery bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any location content'.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_and_events_bean bean'.
  $permissions['delete any news_and_events_bean bean'] = array(
    'name' => 'delete any news_and_events_bean bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any quick_find bean'.
  $permissions['delete any quick_find bean'] = array(
    'name' => 'delete any quick_find bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any showcase bean'.
  $permissions['delete any showcase bean'] = array(
    'name' => 'delete any showcase bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any staff_profile content'.
  $permissions['delete any staff_profile content'] = array(
    'name' => 'delete any staff_profile content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any static content'.
  $permissions['delete any static content'] = array(
    'name' => 'delete any static content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any text_block bean'.
  $permissions['delete any text_block bean'] = array(
    'name' => 'delete any text_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uclalib_event content'.
  $permissions['delete any uclalib_event content'] = array(
    'name' => 'delete any uclalib_event content',
    'roles' => array(
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any uclalib_resources content'.
  $permissions['delete any uclalib_resources content'] = array(
    'name' => 'delete any uclalib_resources content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any upcoming_events bean'.
  $permissions['delete any upcoming_events bean'] = array(
    'name' => 'delete any upcoming_events bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any upcoming_news bean'.
  $permissions['delete any upcoming_news bean'] = array(
    'name' => 'delete any upcoming_news bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own data content'.
  $permissions['delete own data content'] = array(
    'name' => 'delete own data content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own destination content'.
  $permissions['delete own destination content'] = array(
    'name' => 'delete own destination content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own exhibition content'.
  $permissions['delete own exhibition content'] = array(
    'name' => 'delete own exhibition content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own location content'.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own staff_profile content'.
  $permissions['delete own staff_profile content'] = array(
    'name' => 'delete own staff_profile content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own static content'.
  $permissions['delete own static content'] = array(
    'name' => 'delete own static content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own uclalib_event content'.
  $permissions['delete own uclalib_event content'] = array(
    'name' => 'delete own uclalib_event content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own uclalib_resources content'.
  $permissions['delete own uclalib_resources content'] = array(
    'name' => 'delete own uclalib_resources content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in academic_departmental_liaison'.
  $permissions['delete terms in academic_departmental_liaison'] = array(
    'name' => 'delete terms in academic_departmental_liaison',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in area_of_expertise'.
  $permissions['delete terms in area_of_expertise'] = array(
    'name' => 'delete terms in area_of_expertise',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in audience'.
  $permissions['delete terms in audience'] = array(
    'name' => 'delete terms in audience',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in events_and_exhibitions_series'.
  $permissions['delete terms in events_and_exhibitions_series'] = array(
    'name' => 'delete terms in events_and_exhibitions_series',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in events_categories'.
  $permissions['delete terms in events_categories'] = array(
    'name' => 'delete terms in events_categories',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location_amenities'.
  $permissions['delete terms in location_amenities'] = array(
    'name' => 'delete terms in location_amenities',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location_equipment'.
  $permissions['delete terms in location_equipment'] = array(
    'name' => 'delete terms in location_equipment',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location_study_areas'.
  $permissions['delete terms in location_study_areas'] = array(
    'name' => 'delete terms in location_study_areas',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_subject'.
  $permissions['delete terms in media_subject'] = array(
    'name' => 'delete terms in media_subject',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in media_tags'.
  $permissions['delete terms in media_tags'] = array(
    'name' => 'delete terms in media_tags',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_categories'.
  $permissions['delete terms in news_categories'] = array(
    'name' => 'delete terms in news_categories',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resource_categories'.
  $permissions['delete terms in resource_categories'] = array(
    'name' => 'delete terms in resource_categories',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in staff_departments'.
  $permissions['delete terms in staff_departments'] = array(
    'name' => 'delete terms in staff_departments',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in staff_subject_areas'.
  $permissions['delete terms in staff_subject_areas'] = array(
    'name' => 'delete terms in staff_subject_areas',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any data content'.
  $permissions['edit any data content'] = array(
    'name' => 'edit any data content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any destination content'.
  $permissions['edit any destination content'] = array(
    'name' => 'edit any destination content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Hours' => 'Hours',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any exhibition content'.
  $permissions['edit any exhibition content'] = array(
    'name' => 'edit any exhibition content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_content bean'.
  $permissions['edit any featured_content bean'] = array(
    'name' => 'edit any featured_content bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any link_list bean'.
  $permissions['edit any link_list bean'] = array(
    'name' => 'edit any link_list bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any living_library_gallery bean'.
  $permissions['edit any living_library_gallery bean'] = array(
    'name' => 'edit any living_library_gallery bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any location content'.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Hours' => 'Hours',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_and_events_bean bean'.
  $permissions['edit any news_and_events_bean bean'] = array(
    'name' => 'edit any news_and_events_bean bean',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any quick_find bean'.
  $permissions['edit any quick_find bean'] = array(
    'name' => 'edit any quick_find bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any showcase bean'.
  $permissions['edit any showcase bean'] = array(
    'name' => 'edit any showcase bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any staff_profile content'.
  $permissions['edit any staff_profile content'] = array(
    'name' => 'edit any staff_profile content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any static content'.
  $permissions['edit any static content'] = array(
    'name' => 'edit any static content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any text_block bean'.
  $permissions['edit any text_block bean'] = array(
    'name' => 'edit any text_block bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uclalib_event content'.
  $permissions['edit any uclalib_event content'] = array(
    'name' => 'edit any uclalib_event content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any uclalib_resources content'.
  $permissions['edit any uclalib_resources content'] = array(
    'name' => 'edit any uclalib_resources content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any upcoming_events bean'.
  $permissions['edit any upcoming_events bean'] = array(
    'name' => 'edit any upcoming_events bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any upcoming_news bean'.
  $permissions['edit any upcoming_news bean'] = array(
    'name' => 'edit any upcoming_news bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit opening hours for content'.
  $permissions['edit opening hours for content'] = array(
    'name' => 'edit opening hours for content',
    'roles' => array(
      'Hours' => 'Hours',
      'administrator' => 'administrator',
    ),
    'module' => 'opening_hours',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own data content'.
  $permissions['edit own data content'] = array(
    'name' => 'edit own data content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own destination content'.
  $permissions['edit own destination content'] = array(
    'name' => 'edit own destination content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Hours' => 'Hours',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own exhibition content'.
  $permissions['edit own exhibition content'] = array(
    'name' => 'edit own exhibition content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own location content'.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Hours' => 'Hours',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own staff_profile content'.
  $permissions['edit own staff_profile content'] = array(
    'name' => 'edit own staff_profile content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own static content'.
  $permissions['edit own static content'] = array(
    'name' => 'edit own static content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own uclalib_event content'.
  $permissions['edit own uclalib_event content'] = array(
    'name' => 'edit own uclalib_event content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own uclalib_resources content'.
  $permissions['edit own uclalib_resources content'] = array(
    'name' => 'edit own uclalib_resources content',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in academic_departmental_liaison'.
  $permissions['edit terms in academic_departmental_liaison'] = array(
    'name' => 'edit terms in academic_departmental_liaison',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in area_of_expertise'.
  $permissions['edit terms in area_of_expertise'] = array(
    'name' => 'edit terms in area_of_expertise',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in audience'.
  $permissions['edit terms in audience'] = array(
    'name' => 'edit terms in audience',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in events_and_exhibitions_series'.
  $permissions['edit terms in events_and_exhibitions_series'] = array(
    'name' => 'edit terms in events_and_exhibitions_series',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in events_categories'.
  $permissions['edit terms in events_categories'] = array(
    'name' => 'edit terms in events_categories',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location_amenities'.
  $permissions['edit terms in location_amenities'] = array(
    'name' => 'edit terms in location_amenities',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location_equipment'.
  $permissions['edit terms in location_equipment'] = array(
    'name' => 'edit terms in location_equipment',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location_study_areas'.
  $permissions['edit terms in location_study_areas'] = array(
    'name' => 'edit terms in location_study_areas',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_subject'.
  $permissions['edit terms in media_subject'] = array(
    'name' => 'edit terms in media_subject',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in media_tags'.
  $permissions['edit terms in media_tags'] = array(
    'name' => 'edit terms in media_tags',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_categories'.
  $permissions['edit terms in news_categories'] = array(
    'name' => 'edit terms in news_categories',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resource_categories'.
  $permissions['edit terms in resource_categories'] = array(
    'name' => 'edit terms in resource_categories',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in staff_departments'.
  $permissions['edit terms in staff_departments'] = array(
    'name' => 'edit terms in staff_departments',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in staff_subject_areas'.
  $permissions['edit terms in staff_subject_areas'] = array(
    'name' => 'edit terms in staff_subject_areas',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import ccle_redirects_importer feeds'.
  $permissions['import ccle_redirects_importer feeds'] = array(
    'name' => 'import ccle_redirects_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import node feeds'.
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import user feeds'.
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for comment'.
  $permissions['show format selection for comment'] = array(
    'name' => 'show format selection for comment',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for multifield'.
  $permissions['show format selection for multifield'] = array(
    'name' => 'show format selection for multifield',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'unlock ccle_redirects_importer feeds'.
  $permissions['unlock ccle_redirects_importer feeds'] = array(
    'name' => 'unlock ccle_redirects_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock node feeds'.
  $permissions['unlock node feeds'] = array(
    'name' => 'unlock node feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock user feeds'.
  $permissions['unlock user feeds'] = array(
    'name' => 'unlock user feeds',
    'roles' => array(
      'admin_dev' => 'admin_dev',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content editors' => 'content editors',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any featured_content bean'.
  $permissions['view any featured_content bean'] = array(
    'name' => 'view any featured_content bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any link_list bean'.
  $permissions['view any link_list bean'] = array(
    'name' => 'view any link_list bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any living_library_gallery bean'.
  $permissions['view any living_library_gallery bean'] = array(
    'name' => 'view any living_library_gallery bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any news_and_events_bean bean'.
  $permissions['view any news_and_events_bean bean'] = array(
    'name' => 'view any news_and_events_bean bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any quick_find bean'.
  $permissions['view any quick_find bean'] = array(
    'name' => 'view any quick_find bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any showcase bean'.
  $permissions['view any showcase bean'] = array(
    'name' => 'view any showcase bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any text_block bean'.
  $permissions['view any text_block bean'] = array(
    'name' => 'view any text_block bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any upcoming_events bean'.
  $permissions['view any upcoming_events bean'] = array(
    'name' => 'view any upcoming_events bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any upcoming_news bean'.
  $permissions['view any upcoming_news bean'] = array(
    'name' => 'view any upcoming_news bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view icons'.
  $permissions['view icons'] = array(
    'name' => 'view icons',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'icon',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'CE_Basic' => 'CE_Basic',
      'Communication' => 'Communication',
      'Lead Site Editor' => 'Lead Site Editor',
      'admin_dev' => 'admin_dev',
      'admin_ga' => 'admin_ga',
      'administrator' => 'administrator',
      'content editors' => 'content editors',
      'resources editors' => 'resources editors',
    ),
    'module' => 'system',
  );

  return $permissions;
}
