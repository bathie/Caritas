<?php
/**
 * @file
 * contents.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contents_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contents_node_info() {
  $items = array(
    'foires_aux_questions' => array(
      'name' => t('Foires aux questions'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
