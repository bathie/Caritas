<?php
/**
 * @file
 * car_contexte.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function car_contexte_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_activites';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'actualites' => 'actualites',
        'domaines_d_intervention' => 'domaines_d_intervention',
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_activites'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_article';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-21',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_article'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_contact';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_contact'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_faq';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'foires_aux_questions' => 'foires_aux_questions',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'faq' => 'faq',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-image_diaconie_handicaps-block' => array(
          'module' => 'views',
          'delta' => 'image_diaconie_handicaps-block',
          'region' => 'user1',
          'weight' => '-10',
        ),
        'views-image_article-block' => array(
          'module' => 'views',
          'delta' => 'image_article-block',
          'region' => 'user3',
          'weight' => '-10',
        ),
        'views-image_galery-block' => array(
          'module' => 'views',
          'delta' => 'image_galery-block',
          'region' => 'user4',
          'weight' => '-10',
        ),
        'views-mes_faq-block' => array(
          'module' => 'views',
          'delta' => 'mes_faq-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_faq'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_forum';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'forum' => 'forum',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'forum' => 'forum',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-21',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-image_galery-block' => array(
          'module' => 'views',
          'delta' => 'image_galery-block',
          'region' => 'user1',
          'weight' => '-10',
        ),
        'views-image_article-block' => array(
          'module' => 'views',
          'delta' => 'image_article-block',
          'region' => 'user2',
          'weight' => '-10',
        ),
        'views-image_diaconie_handicaps-block' => array(
          'module' => 'views',
          'delta' => 'image_diaconie_handicaps-block',
          'region' => 'user3',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_forum'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'caritas_config-user' => array(
          'module' => 'caritas_config',
          'delta' => 'user',
          'region' => 'sidebar_first',
          'weight' => '8',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_first',
          'weight' => '6',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-image_diaconie_handicaps-block' => array(
          'module' => 'views',
          'delta' => 'image_diaconie_handicaps-block',
          'region' => 'user1',
          'weight' => '-10',
        ),
        'views-image_article-block' => array(
          'module' => 'views',
          'delta' => 'image_article-block',
          'region' => 'user2',
          'weight' => '-10',
        ),
        'views-image_galery-block' => array(
          'module' => 'views',
          'delta' => 'image_galery-block',
          'region' => 'user3',
          'weight' => '-10',
        ),
        'views-bloc_entete-block' => array(
          'module' => 'views',
          'delta' => 'bloc_entete-block',
          'region' => 'user4',
          'weight' => '-10',
        ),
        'caritas_config-bienvenue' => array(
          'module' => 'caritas_config',
          'delta' => 'bienvenue',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-slideshow_test-block_1' => array(
          'module' => 'views',
          'delta' => 'slideshow_test-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_front_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_gallerie';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'album' => 'album',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'gallerie' => 'gallerie',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-23',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-18',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_gallerie'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_partenaires';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'partenaires' => 'partenaires',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-23',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_partenaires'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_presentation';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'presentation' => 'presentation',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-admin-block' => array(
          'module' => 'views',
          'delta' => 'admin-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-17',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_presentation'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'car_programmes';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'programmes' => 'programmes',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'programmes' => 'programmes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'caritas_config-date' => array(
          'module' => 'caritas_config',
          'delta' => 'date',
          'region' => 'sidebar_second',
          'weight' => '-24',
        ),
        'views-acivites-block' => array(
          'module' => 'views',
          'delta' => 'acivites-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-partenariats-block' => array(
          'module' => 'views',
          'delta' => 'partenariats-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '7',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['car_programmes'] = $context;

  return $export;
}
