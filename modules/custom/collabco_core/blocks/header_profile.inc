<?php
/**
 * @file
 * Contains 'Header Profile' block class.
 */

class collabcoBlock_HeaderProfile extends collabcoBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    return parent::info(array(
      'info' => t('Header Profile'),
      'cache' => DRUPAL_CACHE_GLOBAL,
    ));
  }

  /**
   * Implements hook_block_view().
   */
  function view() {
		return array(
			'content' => array(
			  '#theme' => 'header_user_profile',
			  '#user_name' => $user->realname,
			),
		);
  }

}
