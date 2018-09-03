<?php
/**
 * @file
 * uclalib_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uclalib_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog_archives';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog_archives';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Archives';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['default_action'] = 'default';
  $handler->display->display_options['arguments']['created_year']['exception']['value'] = '2015';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year']['default_argument_options']['argument'] = '2015';
  $handler->display->display_options['arguments']['created_year']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_year']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['created_year']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['default_action'] = 'default';
  $handler->display->display_options['arguments']['created_month']['exception']['value'] = '06';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_month']['default_argument_options']['argument'] = '06';
  $handler->display->display_options['arguments']['created_month']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_month']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['created_month']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Created year + month */
  $handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year_month']['exception']['value'] = '';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['created_year_month']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['created_year_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_year_month']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_year_month']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['created_year_month']['validate_options']['code'] = 'return FALSE;';
  $handler->display->display_options['arguments']['created_year_month']['validate']['fail'] = 'summary';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['filters']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['vocabulary'] = 'blog_name';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
    'created_year' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Created year',
    ),
    'created_month' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Created month',
    ),
    'created_year_month' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Created year + month',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'blog_archives/%';
  $export['blog_archives'] = $view;

  $view = new view();
  $view->name = 'blog_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog_content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'UCLA Library Blogs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No posts.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title'] = '%1 Blog';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['default_action'] = 'default';
  $handler->display->display_options['arguments']['created_year']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['title'] = '%1 – %3 %2';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['created_year']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_year']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['created_year']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['default_action'] = 'default';
  $handler->display->display_options['arguments']['created_month']['exception']['value'] = '';
  $handler->display->display_options['arguments']['created_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['title'] = '%1 – %3 %2';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['created_month']['default_argument_options']['index'] = '5';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_month']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['created_month']['validate']['fail'] = 'ignore';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['filters']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_news_blog_name_tid']['vocabulary'] = 'blog_name';

  /* Display: Blog Content - Page */
  $handler = $view->new_display('page', 'Blog Content - Page', 'blog_content_page');
  $handler->display->display_options['display_description'] = 'shows blog posts';
  $handler->display->display_options['path'] = 'blog_content/%';

  /* Display: Blog Content - Content pane */
  $handler = $view->new_display('panel_pane', 'Blog Content - Content pane', 'blog_content_pane');
  $handler->display->display_options['display_description'] = 'shows blog posts';
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
    'created_year' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Created year',
    ),
    'created_month' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'Content: Created month',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Blog Content - Single */
  $handler = $view->new_display('panel_pane', 'Blog Content - Single', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'shows a single blog post';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title'] = '%1 Blog';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['title'] = '%1 – %3 %2';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['created_year']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['validate']['type'] = 'numeric';
  $handler->display->display_options['arguments']['created_year']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['exception']['value'] = '';
  $handler->display->display_options['arguments']['created_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['title'] = '%1 – %3 %2';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'created_year' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Created year',
    ),
    'created_month' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'Content: Created month',
    ),
  );

  /* Display: Blog Content by category- Content pane */
  $handler = $view->new_display('panel_pane', 'Blog Content by category- Content pane', 'blog_content_pane_cat');
  $handler->display->display_options['display_description'] = 'shows blog posts of a specific category';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title'] = '%1 Blog';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: News Categories (field_news_categories) */
  $handler->display->display_options['arguments']['field_news_categories_tid']['id'] = 'field_news_categories_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['arguments']['field_news_categories_tid']['field'] = 'field_news_categories_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_categories_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_categories_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_categories_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_categories_tid']['validate_options']['vocabularies'] = array(
    'news_categories' => 'news_categories',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
    'field_news_categories_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: News Categories (field_news_categories)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Blog Content by tag- Content pane */
  $handler = $view->new_display('panel_pane', 'Blog Content by tag- Content pane', 'blog_content_pane_tag');
  $handler->display->display_options['display_description'] = 'shows blog posts of a specific tag';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['title'] = '%1 Blog';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: News Tags (field_news_tags) */
  $handler->display->display_options['arguments']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['arguments']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['arguments']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  $handler->display->display_options['arguments']['field_news_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_tags_tid']['validate_options']['vocabularies'] = array(
    'news_tags' => 'news_tags',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
    'field_news_tags_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: News Tags (field_news_tags)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['blog_content'] = $view;

  $view = new view();
  $view->name = 'blog_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog_terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: News Categories */
  $handler->display->display_options['fields']['field_news_categories']['id'] = 'field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['field'] = 'field_news_categories';
  $handler->display->display_options['fields']['field_news_categories']['label'] = '';
  $handler->display->display_options['fields']['field_news_categories']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_news_categories']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_categories']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_news_categories']['delta_offset'] = '0';
  /* Sort criterion: Content: News Categories (field_news_categories) */
  $handler->display->display_options['sorts']['field_news_categories_tid']['id'] = 'field_news_categories_tid';
  $handler->display->display_options['sorts']['field_news_categories_tid']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['sorts']['field_news_categories_tid']['field'] = 'field_news_categories_tid';
  /* Contextual filter: Content: Blog Name (field_news_blog_name) */
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['id'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['table'] = 'field_data_field_news_blog_name';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['field'] = 'field_news_blog_name_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['default_argument_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate_options']['vocabularies'] = array(
    'blog_name' => 'blog_name',
  );
  $handler->display->display_options['arguments']['field_news_blog_name_tid']['validate']['fail'] = 'empty';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: News Categories (field_news_categories) */
  $handler->display->display_options['filters']['field_news_categories_tid']['id'] = 'field_news_categories_tid';
  $handler->display->display_options['filters']['field_news_categories_tid']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['filters']['field_news_categories_tid']['field'] = 'field_news_categories_tid';
  $handler->display->display_options['filters']['field_news_categories_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_categories_tid']['value'] = '';
  $handler->display->display_options['filters']['field_news_categories_tid']['vocabulary'] = 'news_categories';

  /* Display: Categories - Page */
  $handler = $view->new_display('page', 'Categories - Page', 'blog_terms_cats_page');
  $handler->display->display_options['path'] = 'blog_terms_cats/%';

  /* Display: Categories - Content pane */
  $handler = $view->new_display('panel_pane', 'Categories - Content pane', 'blog_terms_cats_pane');
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'user',
      'context' => 'terms.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Tags - Page */
  $handler = $view->new_display('page', 'Tags - Page', 'blog_terms_tags_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tags';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Tags */
  $handler->display->display_options['fields']['field_news_tags']['id'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['field'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['label'] = '';
  $handler->display->display_options['fields']['field_news_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_news_tags']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'blog_terms_tags';

  /* Display: Tags - Content pane */
  $handler = $view->new_display('panel_pane', 'Tags - Content pane', 'blog_terms_tags_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tags';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Tags */
  $handler->display->display_options['fields']['field_news_tags']['id'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['field'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['label'] = '';
  $handler->display->display_options['fields']['field_news_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_news_tags']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: News Tags (field_news_tags) */
  $handler->display->display_options['filters']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['filters']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  $handler->display->display_options['filters']['field_news_tags_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_news_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_news_tags_tid']['vocabulary'] = 'news_tags';
  $handler->display->display_options['argument_input'] = array(
    'field_news_blog_name_tid' => array(
      'type' => 'user',
      'context' => 'terms.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Blog Name (field_news_blog_name)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['blog_terms'] = $view;

  $view = new view();
  $view->name = 'news_category_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Node views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: News Categories (field_news_categories) */
  $handler->display->display_options['relationships']['field_news_categories_tid']['id'] = 'field_news_categories_tid';
  $handler->display->display_options['relationships']['field_news_categories_tid']['table'] = 'field_data_field_news_categories';
  $handler->display->display_options['relationships']['field_news_categories_tid']['field'] = 'field_news_categories_tid';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_news_categories_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_news_categories_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a href="/news?f[0]=field_news_categories&#37;3A[tid]">[name]</a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'news' => 'news',
  );

  /* Display: News Category Links */
  $handler = $view->new_display('panel_pane', 'News Category Links', 'category_search_links');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Category';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: News Location Links */
  $handler = $view->new_display('panel_pane', 'News Location Links', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_news_location_target_id']['id'] = 'field_news_location_target_id';
  $handler->display->display_options['relationships']['field_news_location_target_id']['table'] = 'field_data_field_news_location';
  $handler->display->display_options['relationships']['field_news_location_target_id']['field'] = 'field_news_location_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_news_location_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['news_category_links'] = $view;

  $view = new view();
  $view->name = 'recent_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'news' => 'news',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['recent_news'] = $view;

  return $export;
}
