<?php
/**
 * @file
 * collabco_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function collabco_core_taxonomy_default_vocabularies() {
  return array(
    'areas_of_participant_expertise' => array(
      'name' => 'Areas of Participant Expertise',
      'machine_name' => 'areas_of_participant_expertise',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
