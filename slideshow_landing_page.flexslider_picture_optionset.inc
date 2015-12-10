<?php
/**
 * @file
 * slideshow_landing_page.flexslider_picture_optionset.inc
 */

/**
 * Implements hook_default_flexslider_picture_optionset().
 */
function slideshow_landing_page_default_flexslider_picture_optionset() {
  $export = array();

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'widescreen';
  $flexslider_picture_optionset->imagestyle_type = 'picture_mapping';
  $flexslider_picture_optionset->mapping = 'widescreen_picture_mappings';
  $flexslider_picture_optionset->fallback = '';
  $export['widescreen'] = $flexslider_picture_optionset;

  return $export;
}
