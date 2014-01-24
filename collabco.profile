<?php
/**
 * @file
 * Install profile for Collabco.
 */

/**
 * Include for Profiler library.
 */
!function_exists('profiler_v2') ? require_once('libraries/profiler/profiler.inc') : FALSE;
profiler_v2('collabco');

/**
 * Implements hook_form_FORM_ID_alter().
 */
function collabco_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'collabco';
}
