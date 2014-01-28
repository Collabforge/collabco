<?php
/**
 * @file
 * collabco_service.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function collabco_service_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-service-body'
  $field_instances['node-service-body'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-service-field_sub_services'
  $field_instances['node-service-field_sub_services'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection_fieldset',
        'settings' => array(
          'add' => 'Add Sub-Service',
          'collapsed' => 1,
          'collapsible' => 1,
          'delete' => 'Delete',
          'description' => 1,
          'edit' => 'Edit',
          'legend' => 'field_sub_service_title',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fieldset_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sub_services',
    'label' => 'Sub-services',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_fieldset',
      'settings' => array(
        'collapsed' => 1,
        'last_item_collapsed' => 1,
      ),
      'type' => 'field_collection_fieldset',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Sub-services');

  return $field_instances;
}
