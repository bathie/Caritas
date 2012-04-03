<?php
/**
 * @file
 * test.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function test_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshow_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'slideshow_test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Carte des différents régions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Par défaut',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_card' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_image_card' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollUp';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_image' => 'field_image',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Champ: Contenu: image_card */
  $handler->display->display_options['fields']['field_image_card']['id'] = 'field_image_card';
  $handler->display->display_options['fields']['field_image_card']['table'] = 'field_data_field_image_card';
  $handler->display->display_options['fields']['field_image_card']['field'] = 'field_image_card';
  $handler->display->display_options['fields']['field_image_card']['label'] = '';
  $handler->display->display_options['fields']['field_image_card']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_card']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_card']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_card']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_card']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_card']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_image_card']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_card']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_card']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_image_card']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_card']['settings'] = array(
    'image_style' => 'carte_caritas',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_card']['field_api_classes'] = 0;
  /* Contextual filter: Contenu: Image (field_image:alt) */
  $handler->display->display_options['arguments']['field_image_alt']['id'] = 'field_image_alt';
  $handler->display->display_options['arguments']['field_image_alt']['table'] = 'field_data_field_image';
  $handler->display->display_options['arguments']['field_image_alt']['field'] = 'field_image_alt';
  $handler->display->display_options['arguments']['field_image_alt']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_image_alt']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_image_alt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_image_alt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_image_alt']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_image_alt']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_image_alt']['limit'] = '0';
  $handler->display->display_options['arguments']['field_image_alt']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_image_alt']['break_phrase'] = 0;
  /* Filter criterion: Contenu: image_card (field_image_card:alt) */
  $handler->display->display_options['filters']['field_image_card_alt']['id'] = 'field_image_card_alt';
  $handler->display->display_options['filters']['field_image_card_alt']['table'] = 'field_data_field_image_card';
  $handler->display->display_options['filters']['field_image_card_alt']['field'] = 'field_image_card_alt';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'slideshow-test';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $translatables['slideshow_test'] = array(
    t('Master'),
    t('Carte des différents régions'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Tous / Toutes'),
    t('Page'),
    t('Bloc'),
  );
  $export['slideshow_test'] = $view;

  return $export;
}
