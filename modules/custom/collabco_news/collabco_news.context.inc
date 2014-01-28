<?php
/**
 * @file
 * collabco_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function collabco_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-news';
  $context->description = '';
  $context->tag = 'Collabco';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'collabco_news-news_header' => array(
          'module' => 'collabco_news',
          'delta' => 'news_header',
          'region' => 'header',
          'weight' => '-10',
        ),
        'views-43f89296e476f2b6f116c1d51db2e3d9' => array(
          'module' => 'views',
          'delta' => '43f89296e476f2b6f116c1d51db2e3d9',
          'region' => 'main_upper',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collabco');
  $export['layout-news'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-news-content';
  $context->description = '';
  $context->tag = 'Collabco';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news/*' => 'news/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Collabco');
  $export['layout-news-content'] = $context;

  return $export;
}
