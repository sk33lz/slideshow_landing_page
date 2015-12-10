<?php
/**
 * @file
 * slideshow_landing_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function slideshow_landing_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slideshows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'widescreen';
  $handler->display->display_options['style_options']['captionfield'] = 'field_slide_text';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Slideshow Slides (field_slideshow) */
  $handler->display->display_options['relationships']['field_slideshow_value']['id'] = 'field_slideshow_value';
  $handler->display->display_options['relationships']['field_slideshow_value']['table'] = 'field_data_field_slideshow';
  $handler->display->display_options['relationships']['field_slideshow_value']['field'] = 'field_slideshow_value';
  $handler->display->display_options['relationships']['field_slideshow_value']['delta'] = '-1';
  /* Field: Field collection item: Slide Link */
  $handler->display->display_options['fields']['field_slide_link']['id'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['table'] = 'field_data_field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['field'] = 'field_slide_link';
  $handler->display->display_options['fields']['field_slide_link']['relationship'] = 'field_slideshow_value';
  $handler->display->display_options['fields']['field_slide_link']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_slide_link']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Slide Image */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['relationship'] = 'field_slideshow_value';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['alter']['path'] = '[field_slide_link]';
  $handler->display->display_options['fields']['field_slide_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_slide_image']['settings'] = array(
    'picture_mapping' => 'widescreen_picture_mappings',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slide_image']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Slide  Text */
  $handler->display->display_options['fields']['field_slide_text']['id'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['table'] = 'field_data_field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['field'] = 'field_slide_text';
  $handler->display->display_options['fields']['field_slide_text']['relationship'] = 'field_slideshow_value';
  $handler->display->display_options['fields']['field_slide_text']['label'] = '';
  $handler->display->display_options['fields']['field_slide_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_text']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Slideshow Slides (field_slideshow:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_slideshow';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Slideshow Slides (field_slideshow:revision_id) */
  $handler->display->display_options['filters']['field_slideshow_revision_id']['id'] = 'field_slideshow_revision_id';
  $handler->display->display_options['filters']['field_slideshow_revision_id']['table'] = 'field_data_field_slideshow';
  $handler->display->display_options['filters']['field_slideshow_revision_id']['field'] = 'field_slideshow_revision_id';
  $handler->display->display_options['filters']['field_slideshow_revision_id']['operator'] = 'not empty';

  /* Display: Contextual Slideshow */
  $handler = $view->new_display('panel_pane', 'Contextual Slideshow', 'panel_pane_1');
  $export['slideshows'] = $view;

  return $export;
}
