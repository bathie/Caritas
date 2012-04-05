<?php
/**
 * @file
 * caritas.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function caritas_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_album';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_album'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_article';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_article'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_faquestions';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_faquestions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_foires_aux_questions';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_foires_aux_questions'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_partenaires';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_partenaires'] = $strongarm;

  return $export;
}
