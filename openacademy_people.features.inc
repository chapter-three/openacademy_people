<?php
/**
 * @file
 * openacademy_people.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openacademy_people_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function openacademy_people_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openacademy_people_node_info() {
  $items = array(
    'openacademy_person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('An important person to post to your site.
'),
      'has_title' => '1',
      'title_label' => t('Name of Person'),
      'help' => '',
    ),
  );
  return $items;
}
