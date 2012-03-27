<?php
/**
 * @file
 * content_type_partenaire.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_partenaire_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_partenaire_node_info() {
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
