<?php
/**
 * @file
 * caritas_partenaires.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function caritas_partenaires_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function caritas_partenaires_node_info() {
  $items = array(
    'partenaires' => array(
      'name' => t('Partenaires'),
      'base' => 'node_content',
      'description' => t('un type de contenu qui permet d\'ajouter un nouveau partenaire pour Caritas.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
