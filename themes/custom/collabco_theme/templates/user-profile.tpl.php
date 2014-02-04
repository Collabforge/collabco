<?php
/*
the variables:
67, field_business_position
67, field_personal_bio
67, field_areas_of_expertise
67, field_external_link
67, field_organisation_ref

the loop to get keys: (not working properly)
  foreach ($user_profile['profile_profile']['view']['profile2'] as $key => $field) {
  	print "This is field $key: " . render($field);
  }

<?php print $account->name . ', id #' . $account->uid . ' ' . $account->mail; ?>
*/

  $fields = reset($user_profile['profile_profile']['view']['profile2']);
  $account = $elements['#account'];
  $full_name = $user_profile['field_first_name']['#object']->name;
?>

<?php
/*
IF current_profile_page == logged_in_user_viewing_it THEN
a href /user/USER_ID/edit
end
*/
?>

<div class="user-profile">
	<div class="span2 first">
		<div class="profile-page-user-picture">
			<?php print render ($user_profile['user_picture']); ?>
		</div>
	</div>
	<div class="span7">
		<div class="profile-page-title">    
			<p><?php print($full_name); ?></p>
		</div>
	</div>
	<div class="span3 last">
		<div class="profile-page-edit">
			<?php
			$myuserid = $user->uid;
			$youruserid = $account->uid;
			if ($myuserid==$youruserid) { ?>
			<a href="/user/<?php print $account->uid; ?>/edit/profile"><img src="/sites/all/themes/custom_theme/images/edit_button.png"> Edit your profile</a>
			<?php } ?>
		</div>
	</div>
	<br>
	
	<div class="span7 first">
		<div class="profile-page-user-position">
			<?php print render ($fields['field_business_position']); ?>
		</div>
		<br>
		<div class="profile-page-user-bio">
			<?php print render ($fields['field_personal_bio']); ?>
		</div>
	</div>

	<div class="span3 last">
		<div class="profile-page-user-expertise">
			<?php print render ($fields['field_areas_of_expertise']); ?>
		</div>
		<br>
		<div class="profile-page-user-external">
			<?php print render ($fields['field_external_link']); if(isset($fields['field_external_link'])) { echo "<br>"; } ?>
		</div>
		
		<div class="profile-page-user-email">
			<div class="field-label"><b>Email address</b></div>
			<div class="field-item"><a href="mailto:<?php print $account->mail; ?>"><?php print $account->mail; ?></a></div>
		</div>
		<br>
		<div class="profile-page-user-contact">
			<div class="field-label"><b>Send <?php print $account->name; ?> an email</b></div>
			<div class="field-item"><a href="/user/<?php print $account->uid; ?>/contact">Send a message</a></div>
		</div>
	</div>
</div>

