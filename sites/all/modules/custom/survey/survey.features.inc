<?php
/**
 * @file
 * survey.features.inc
 */

/**
 * Implements hook_views_api().
 */
function survey_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function survey_node_info() {
  $items = array(
    'test_form' => array(
      'name' => t('Survey'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
