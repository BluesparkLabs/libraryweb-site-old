<?php

/**
 * @file
 * Plugin definition and callbacks for a ctools:content_types plugin.
 *
 * @ingroup CToolsPlugin CToolsPluginContentTypes
 */

$plugin = array(
  'category'         => t('UCLALIB Global'),
  'title'            => t("UCLALIB Navigation block"),
  'description'      => t("Universal navigation block - shows children if any exist, otherwise shows sibling items."),
  'edit form'        => 'uclalib_navigation_ctools_content_types_uclalib_nav_edit_form',
  'render callback'  => 'uclalib_navigation_ctools_content_types_uclalib_nav_render',
);

/**
 * Edit form callback.
 */
function uclalib_navigation_ctools_content_types_uclalib_nav_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render callback.
 *
 * "CTools:Content types" plugin render callback for "Uclalib opening hours:Opening hours table".
 *
 * @param string $subtype
 *   Subtype identifier.
 * @param array  $conf
 *   Configuration of the $subtype instance.
 * @param array  $args
 *   Documentation missing.
 * @param array  $pane_context
 *   Documentation missing.
 * @param array  $incoming_content
 *   Documentation missing.
 *
 * @return object
 *   The content.
 */
function uclalib_navigation_ctools_content_types_uclalib_nav_render($subtype, $conf, $args, $pane_context, $incoming_content) {
  $block = new stdClass();

  // Where in the world is Carmen san Diego?
  $menu_trail = menu_get_active_trail();
  $parent = $menu_trail[count($menu_trail) - 2];
  $current = $menu_trail[count($menu_trail) - 1];

  // Bail if there's no menu.
  if (!isset($menu_trail[1]['menu_name'])) {
    return;
  }

  // Use menu_block module to generate the tree.
  // We fake a configuration for the module.
  $config = array(
    'menu_name' => $menu_trail[1]['menu_name'],
    'level' => 0,
    'follow' => 0,
    'depth' => 5,
    'expanded' => FALSE,
    'delta' => 'uclalib-nav',
    'sort' => FALSE,
    'title_link' => '',
  );
  if (isset($parent['mlid'])) {
    $config['parent_mlid'] = $parent['mlid'];
  } else {
    $config['parent_mlid'] = $current['mlid'];
  }

  // menu_tree_build is actually a menu_block.module function.
  $data = menu_tree_build($config);

  // Find out if this item has children.
  $has_children = FALSE;
  if (is_array($data['content']) && isset($data['content']['#content'][$current['mlid']]['#below']) && $data['content']['#content'][$current['mlid']]['#below']) {
    $has_children = TRUE;
    // This item has children, re-generate the menu tree.
    $config['parent_mlid'] = $current['mlid'];
    $data = menu_tree_build($config);

    /*
    // This item has children, remove any siblings.
    foreach ($data['content']['#content'] as $key => $item) {
      if (is_numeric($key) && ($key != $current['mlid'])) {
        unset($data['content']['#content'][$key]);
      }
    }
    */
  }

  // Render the result.
  $output = render($data['content']);

  // This is a sub-section or below, the title should link to the parent.
  if (count($menu_trail) > 2) {
    if ($has_children) {
      $block->title = l(t('At a Glance'), $current['link_path'], array('attributes' => array('class' => array('nav-current-path', 'nav-has-menu-trail'))));
    } else {
      $block->title = l(t('At a Glance'), $parent['link_path'], array('attributes' => array('class' => array('nav-parent-path', 'nav-has-menu-trail'))));
    }
  }
  else {
    $block->title = l(t('At a Glance'), $current['link_path'], array('attributes' => array('class' => array('nav-current-path'))));
  }


  $block->module = 'uclalib_navigation';
  $block->delta = $subtype;
  $block->content = $output;

  return $block;
}
