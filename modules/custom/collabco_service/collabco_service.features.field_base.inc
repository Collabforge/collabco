<?php
/**
 * @file
 * collabco_service.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function collabco_service_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sub_services'
  $field_bases['field_sub_services'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sub_services',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
