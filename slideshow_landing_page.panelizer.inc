<?php
/**
 * @file
 * slideshow_landing_page.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function slideshow_landing_page_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:landing_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'landing_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'one_column_top_and_bottom_rows';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'center' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '0e809883-95e9-4111-bda0-262796d30a53';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-17522286-8b57-45d7-96fd-794f56c3b472';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17522286-8b57-45d7-96fd-794f56c3b472';
    $display->content['new-17522286-8b57-45d7-96fd-794f56c3b472'] = $pane;
    $display->panels['center'][0] = 'new-17522286-8b57-45d7-96fd-794f56c3b472';
    $pane = new stdClass();
    $pane->pid = 'new-486cfbc5-38e7-45cf-bcfc-3e502d8cb995';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '486cfbc5-38e7-45cf-bcfc-3e502d8cb995';
    $display->content['new-486cfbc5-38e7-45cf-bcfc-3e502d8cb995'] = $pane;
    $display->panels['center'][1] = 'new-486cfbc5-38e7-45cf-bcfc-3e502d8cb995';
    $pane = new stdClass();
    $pane->pid = 'new-fe736db5-f9b5-455a-94a9-799a3d15e488';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'slideshows-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fe736db5-f9b5-455a-94a9-799a3d15e488';
    $display->content['new-fe736db5-f9b5-455a-94a9-799a3d15e488'] = $pane;
    $display->panels['top'][0] = 'new-fe736db5-f9b5-455a-94a9-799a3d15e488';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-17522286-8b57-45d7-96fd-794f56c3b472';
  $panelizer->display = $display;
  $export['node:landing_page:default'] = $panelizer;

  return $export;
}
