<?php
/**
 * @file
 * collabco_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_news_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function collabco_news_node_info() {
  $items = array(
    'news_update' => array(
      'name' => t('News Update'),
      'base' => 'node_content',
      'description' => t('This is used by Meta team. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
