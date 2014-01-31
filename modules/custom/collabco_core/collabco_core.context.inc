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
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
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
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content_upper',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-topics';
  $context->description = '';
  $context->tag = 'Collabco';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'topics' => 'topics',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'collabco_core-topics_header' => array(
          'module' => 'collabco_core',
          'delta' => 'topics_header',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-241e15799667656b186d4be1ce1d03f1' => array(
          'module' => 'views',
          'delta' => '241e15799667656b186d4be1ce1d03f1',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
        'quicktabs-topics' => array(
          'module' => 'quicktabs',
          'delta' => 'topics',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collabco');
  $export['layout-topics'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-topics-content';
  $context->description = '';
  $context->tag = 'Collabco';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'topics/*' => 'topics/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-0cdc5f11127e9f081a132e1a42abba72' => array(
          'module' => 'views',
          'delta' => '0cdc5f11127e9f081a132e1a42abba72',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collabco');
  $export['layout-topics-content'] = $context;

  return $export;
}
