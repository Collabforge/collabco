<?php
/**
 * @file
 */

/**
 * Standard block.
 */
class collabcoBlock {

  /**
   * Implements hook_block_info().
   */
  function info() {
    $args = func_get_args();
    $info = array_shift($args);
    return $info;
  }

  /**
   * Implements hook_block_view().
   */
  function view() {
    $args = func_get_args();
    $view = array_shift($args);
    return $view;
  }

}

/**
 * Token block.
 */
class collabcoTokenBlock extends collabcoBlock {

  /**
   * Value callback.
   */
  function value() {
    return '';
  }

  /**
   * Implements hook_block_view().
   */
  function view() {
    $token = $this->value();
    $view = array(
      'content' => token_replace($token)
    );

    return parent::view($view);
  }

}
