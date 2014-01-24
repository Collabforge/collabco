<?php
/**
 * @file
 * System module integration.
 */

/**
 * Implements hook_block_info().
 */
function collabco_core_block_info() {
  $blocks = array();

  // Load all block includes.
  $dirname = dirname(__FILE__);
  $includes = file_scan_directory("{$dirname}/../blocks", '/.inc$/');
  foreach ($includes as $file) {
    require_once $file->uri;

    // Process block into class name.
    $block = 'collabcoBlock_' . collabco_core_underscores_to_camelcase($file->name, TRUE);

    // Build block info.
    $block = new $block();
    $blocks[$file->name] = $block->info();
  }

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function collabco_core_block_view($delta = '') {
  if (file_exists($file = dirname(__FILE__) . "/../blocks/{$delta}.inc")) {
    require_once $file;

    // Process block into class name.
    $block = 'collabcoBlock_' . collabco_core_underscores_to_camelcase($delta, TRUE);

    // Return block view.
    $block = new $block();
    return $block->view();
  }
  return FALSE;
}

/**
 * Implements hook_theme().
 */
function collabco_core_theme() {
  $items = array();
  drupal_alter('collabco_core_theme');
}

