<?php
/**
 * @file
 * contenu.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function contenu_image_default_styles() {
  $styles = array();

  // Exported image style: carte_caritas
  $styles['carte_caritas'] = array(
    'name' => 'carte_caritas',
    'effects' => array(
      1 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => '550',
          'height' => '300',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
