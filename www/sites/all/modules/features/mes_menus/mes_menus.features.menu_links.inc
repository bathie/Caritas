<?php
/**
 * @file
 * mes_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mes_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:programmes
  $menu_links['main-menu:programmes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'programmes',
    'router_path' => 'programmes',
    'link_title' => 'Programmes',
    'options' => array(
      'attributes' => array(
        'title' => 'Nos programmes',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Programmes');


  return $menu_links;
}
