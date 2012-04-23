<?php
/**
 * @file
 * content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_types_node_info() {
  $items = array(
    'bloc_photo' => array(
      'name' => t('bloc_photo'),
      'base' => 'node_content',
      'description' => t('creer des images pour les blocs d\'entete'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'programmes' => array(
      'name' => t('Programmes'),
      'base' => 'node_content',
      'description' => t('Ajouter un nouveau programme.'),
      'has_title' => '1',
      'title_label' => t('Programme'),
      'help' => '',
    ),
  );
  return $items;
}
