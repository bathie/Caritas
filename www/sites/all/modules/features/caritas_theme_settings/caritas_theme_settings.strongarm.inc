<?php
/**
 * @file
 * caritas_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function caritas_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_zeropoint_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://entete.png',
    'default_favicon' => 0,
    'favicon_path' => 'public://ico.png',
    'favicon_upload' => '',
    'style' => 'nature',
    'layout-width' => '0',
    'sidebarslayout' => '4',
    'themedblocks' => '1',
    'blockicons' => '2',
    'pageicons' => 0,
    'navpos' => '2',
    'roundcorners' => 0,
    'headerimg' => 0,
    'cssPreload' => 0,
    'loginlinks' => 0,
    'breadcrumb_display' => 1,
    'search_snippet' => 1,
    'search_info_type' => 0,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'siteid' => '',
    'nice_menus_custom_css' => '',
    'favicon_mimetype' => 'image/png',
  );
  $export['theme_zeropoint_settings'] = $strongarm;

  return $export;
}
