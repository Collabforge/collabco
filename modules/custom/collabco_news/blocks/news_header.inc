<?php
/**
 * @file
 * Contains 'News Header' block class.
 */

class collabcoBlock_NewsHeader extends collabcoBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    return parent::info(array(
      'info' => t('News Header'),
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

          <div class="topic_index_intro row-fluid">
            <h1>News</h1>
            <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam euismod elementum consequat. Fusce ut nunc eget erat bibendum aliquet. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos.</p>
          </div>
        </div>
				',
    );

  }

}
