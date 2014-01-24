<?php

/**
 * Impliments hook_field_widget_form_alter().
 */
function collabco_theme_field_widget_form_alter(&$element, &$form_state, $context) {
  if (!empty($element['#field_name'])) {
    switch ($element['#field_name']) {
      case 'field_ko_file':
        unset($element['#theme_wrappers']);
        unset($element['#description']);
        $element['#file_upload_description'] = '';
        break;
      case 'field_file_ref':
        $help = t('Or select a file you have already uploaded elsewhere');
        $element['#field_prefix'] = $help;
        break;
      case 'og_group_ref':
        unset($element['#theme_wrappers']);
        break;
    }
  }
}

/**
 * Impliments hook_form_alter().
 */
function collabco_theme_form_alter(&$form, &$form_state, $form_id) {

}

