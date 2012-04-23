<?php
/**
 * @file
 * contenu_image.features.inc
 */

/**
 * Implements hook_views_api().
 */
function contenu_image_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
