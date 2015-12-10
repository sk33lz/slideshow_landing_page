<?php
/**
 * @file
 * slideshow_landing_page.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function slideshow_landing_page_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Widescreen Picture Mappings';
  $picture_mapping->machine_name = 'widescreen_picture_mappings';
  $picture_mapping->breakpoint_group = 'bear_default';
  $picture_mapping->mapping = array(
    'custom.user.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bear_narrow_1x',
      ),
    ),
    'custom.user.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bear_mobile_1x',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bear_mobile_1_5x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bear_mobile_2x',
      ),
    ),
    'custom.user.full' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow_1280',
      ),
    ),
  );
  $export['widescreen_picture_mappings'] = $picture_mapping;

  return $export;
}
