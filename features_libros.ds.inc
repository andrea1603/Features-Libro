<?php
/**
 * @file
 * features_libros.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function features_libros_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|libros|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'libros';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_image',
        2 => 'field_isbn',
        3 => 'field_autor',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_image' => 'left',
      'field_isbn' => 'left',
      'field_autor' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|libros|default'] = $ds_layout;

  return $export;
}
