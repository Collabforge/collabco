<?php
/**
 * @file
 * Contains 'Header Profile' block class.
 */

class collabcoBlock_ProfileBlock extends collabcoBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    return parent::info(array(
      'info' => t('Profile Block'),
      'cache' => DRUPAL_CACHE_GLOBAL,
    ));
  }

  /**
   * Implements hook_block_view().
   */
  function view() {

    $entity_type = 'node';
    $field = 'title';
    $groups_output = '';
    $groups = og_get_groups_by_user($user);
    if (!empty($groups)) {
      foreach ($groups['node'] as $key => $gid) {
        $node = node_load($gid);
        $group_links = '<a href="'.$base_url.'/node/' . $node->nid . '">' . $node->title . '</a>';
      }
      // DISABLED BY MATT FOR META DEMO. I only disabled the output obviously. Re-enable by removing comment-out.
      /*$groups_output = '<div><h6>Your Groups:</h6><div>' . $group_links . '</div></div>';*/
    }

		return '
    <div id="iin-profile-content" class="row-fluid">
      <div id="iin-profile-picture" >'.theme('user_picture', array('account' => $user)).'</div>
      <div>'.$user->realname.'</div><br>
      <div>
        <a href="'.$base_url.'/user">Profile</a> |
        <a href="'.$base_url.'/user/logout">Logout</a>
      </div>
    </div>
    ' . $groups_output . '
    <div class="profile-links">
      <a href="/">Recommended</a>
    </div>
    <div class="profile-links">
      <a href="/following">Following</a>
    </div>
    ';
  }

}

