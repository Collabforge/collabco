<?php
/**
 * @file
 * Contains 'Header Profile' block class.
 */

class collabcoBlock_ProfileHeader extends collabcoBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    return parent::info(array(
      'info' => t('Profile Header'),
      'cache' => DRUPAL_CACHE_GLOBAL,
    ));
  }

  /**
   * Implements hook_block_view().
   */
  function view() {
		return array(
			'title' => t('Profile_header'),
			'content' => array(
			  '#theme' => 'profile_header_template',
			  '#user_name' => $user->realname,
			),
		);
  }

}
