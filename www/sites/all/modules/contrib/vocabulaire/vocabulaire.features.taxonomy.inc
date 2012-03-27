<?php
/**
 * @file
 * vocabulaire.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vocabulaire_taxonomy_default_vocabularies() {
  return array(
    'actualites' => array(
      'name' => 'Actualites',
      'machine_name' => 'actualites',
      'description' => 'les actualités récentes',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
