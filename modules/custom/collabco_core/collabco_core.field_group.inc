<?php
/**
 * @file
 * collabco_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function collabco_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '11',
    'children' => array(
      0 => 'field_business_position',
      1 => 'field_external_link',
      2 => 'field_personal_bio',
      3 => 'field_areas_of_expertise',
      4 => 'field_organisation_ref',
      5 => 'picture',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Profile',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile',
        'description' => '',
      ),
      'formatter' => 'start',
    ),
  );
  $export['group_profile|user|user|form'] = $field_group;

  return $export;
}
