<?php
/**
 * @file
 * Contains 'Topic Header' block class.
 */

class collabcoBlock_TopicsHeader extends collabcoBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    return parent::info(array(
      'info' => t('Topics Header'),
      'cache' => DRUPAL_CACHE_GLOBAL,
    ));
  }

  /**
   * Implements hook_block_view().
   */
  function view() {
    return array(
      'title' => '',
      'content' => '
				<div class="title_text">
					<div class="topic_logo span2">
					</div>
					<div class="topic_index_intro row-fluid span6">
						<h1>Topics</h1>
						<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam euismod elementum consequat. Fusce ut nunc eget erat bibendum aliquet. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.</p>
					</div>
					<div class="topic_host row-fluid span4">
						<h2>Host a topic</h2>
						<p>Suspendisse a enim enim. Duis dapibus dictum justo nec facilisis. Donec vel semper lectus.</p>
						<div class="orangebutton">
							<a href="/node/add/conversation">Create a new topic</a>
						</div>
					</div>
				</div>
				',
    );

  }

}
