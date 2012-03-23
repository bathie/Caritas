<?php
/**
 * @file
 * tax_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_feature_taxonomy_default_vocabularies() {
  return array(
    'domaines_d_intervention' => array(
      'name' => 'Domaines d\'intervention',
      'machine_name' => 'domaines_d_intervention',
      'description' => 'Secteurs d\'activités',
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
