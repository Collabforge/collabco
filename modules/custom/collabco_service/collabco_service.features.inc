<?php
/**
 * @file
 * collabco_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_service_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_service_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function collabco_service_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
