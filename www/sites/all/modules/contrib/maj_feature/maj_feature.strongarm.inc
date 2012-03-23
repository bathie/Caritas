<?php
/**
 * @file
 * maj_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function maj_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_files';
  $strongarm->value = array(
    0 => 'public://color/bartik-18353c91/logo.png',
    1 => 'public://color/bartik-18353c91/colors.css',
  );
  $export['color_bartik_files'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_logo';
  $strongarm->value = 'public://color/bartik-18353c91/logo.png';
  $export['color_bartik_logo'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_palette';
  $strongarm->value = array(
    'top' => '#cd2d2d',
    'bottom' => '#cf3535',
    'bg' => '#ffffff',
    'sidebar' => '#f1f4f0',
    'sidebarborders' => '#ededed',
    'footer' => '#1f1d1c',
    'titleslogan' => '#fffeff',
    'text' => '#3b3b3b',
    'link' => '#d6121f',
  );
  $export['color_bartik_palette'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_stylesheets';
  $strongarm->value = array(
    0 => 'public://color/bartik-18353c91/colors.css',
  );
  $export['color_bartik_stylesheets'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => 'public://logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

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
    'logo_path' => 'public://caritas_0.png',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'public://ico.png',
    'favicon_upload' => '',
    'style' => 'lime',
    'layout-width' => '0',
    'sidebarslayout' => '0',
    'themedblocks' => '0',
    'blockicons' => '2',
    'pageicons' => 1,
    'navpos' => '2',
    'roundcorners' => 1,
    'headerimg' => 1,
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
