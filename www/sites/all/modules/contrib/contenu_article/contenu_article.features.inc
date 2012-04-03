<?php
/**
 * @file
 * contenu_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function contenu_article_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function contenu_article_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Utilisez les <em>articles</em> pour des contenus possédant une temporalité tels que des actualités, des communiqués de presse ou des billets de blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
