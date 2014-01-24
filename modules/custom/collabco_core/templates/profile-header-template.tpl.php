<?php
/**
 * @file
 * Default theme implementation for PCP block
 *
 * Available variables:
 *  $uid: Current user ID.
 *  $current_percent: From 0 to 100% of how much the profile is complete.
 *  $next_percent: The percent if the user filled the next field.
 *  $completed: How many fields the user has filled.
 *  $incomplete: The inverse of $completed, how many empty fields left.
 *  $total: Total number of fields in profile.
 *  $nextfield_title: The name of the suggested next field to fill (human readable name).
 *  $nextfield_name: The name of the suggested next field to fill (machine name).
 *  $nextfield_id: The id of the $nextfield.
 *
 * @see template_preprocess_pcp_profile_percent_complete()
 */
?>

<div id="user_details" class="row-fluid">
  <div class="navigation-profile-picture" >
    <?php $picture = theme('user_picture', array('account' => $user));
    print($picture);
   ?>
 </div>
  <div class="btn-group" id="navigation-profile-details">
    <button class="btn"><?php print $user->realname; ?></button>
    <button class="btn dropdown-toggle" data-toggle="dropdown">
      <span class="caret"></span>
    </button>
    <ul class="dropdown-menu">
     <li><a href="/user/<?php print $user->uid; ?>/edit">account</a></li>
     <li><a href="/user/<?php print $user->uid; ?>/edit/profile">profile</a></li>
     <li><a href="/user/logout">logout</a></li>
    </ul>
  </div>
</div>
