<?php
/**
 * @file
 * collabco_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collabco_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-global';
  $context->description = '';
  $context->tag = 'Collabco';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-meta-secondary-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-meta-secondary-menu',
          'region' => 'header_top_middle',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header_bottom_left',
          'weight' => '-10',
        ),
        'collabco_core-profile_header' => array(
          'module' => 'collabco_core',
          'delta' => 'profile_header',
          'region' => 'header_bottom_right',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collabco');
  $export['layout-global'] = $context;

  return $export;
}
