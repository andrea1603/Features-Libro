<?php
/**
 * @file
 * features_libros.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_libros_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_libros_node_info() {
  $items = array(
    'libros' => array(
      'name' => t('Libros'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
