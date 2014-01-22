<?php
/**
 * @file
 * collabco_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function collabco_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function collabco_core_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function collabco_core_flag_default_flags() {
  $flags = array();
  // Exported flag: "Follow topic".
  $flags['follow'] = array(
    'entity_type' => 'node',
    'title' => 'Follow topic',
    'global' => 0,
    'types' => array(
      0 => 'conversation',
    ),
    'flag_short' => 'Follow this topic',
    'flag_long' => '',
    'flag_message' => 'You are now following this topic',
    'unflag_short' => 'Unfollow this topic',
    'unflag_long' => '',
    'unflag_message' => 'Your are no longer following this topic',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'collabco_core',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Hide content".
  $flags['hide_content'] = array(
    'entity_type' => 'node',
    'title' => 'Hide content',
    'global' => 0,
    'types' => array(
      0 => 'news_update',
    ),
    'flag_short' => 'Hide this',
    'flag_long' => 'Do not show this news update again',
    'flag_message' => 'From now on this news update will be hidden from view.',
    'unflag_short' => 'Unhide this',
    'unflag_long' => 'Remove this news update from your hide-list',
    'unflag_message' => 'This news update will now be visible again.',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'collabco_core',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function collabco_core_node_info() {
  $items = array(
    'basic_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'closed_group' => array(
      'name' => t('Closed Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'conversation' => array(
      'name' => t('Topic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Topic'),
      'help' => '',
    ),
    'knowledge_object' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
