<?php
/**
 * @file
 * cod_registration_pages.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cod_registration_pages_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:registration:default';
  $panelizer->title = 'Registration';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'page-node-registration';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5a9baa0d-15d1-4b16-9840-6a983ea2183a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-87ae1465-faa2-450b-a0be-1a3623d3cbba';
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
    $pane->uuid = '87ae1465-faa2-450b-a0be-1a3623d3cbba';
    $display->content['new-87ae1465-faa2-450b-a0be-1a3623d3cbba'] = $pane;
    $display->panels['center'][0] = 'new-87ae1465-faa2-450b-a0be-1a3623d3cbba';
    $pane = new stdClass();
    $pane->pid = 'new-e2362879-7606-47d4-a256-5f9eea0b8889';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:upload';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_table',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e2362879-7606-47d4-a256-5f9eea0b8889';
    $display->content['new-e2362879-7606-47d4-a256-5f9eea0b8889'] = $pane;
    $display->panels['center'][1] = 'new-e2362879-7606-47d4-a256-5f9eea0b8889';
    $pane = new stdClass();
    $pane->pid = 'new-ccece1cb-9ecb-4565-b52f-89aa987bcd8a';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ccece1cb-9ecb-4565-b52f-89aa987bcd8a';
    $display->content['new-ccece1cb-9ecb-4565-b52f-89aa987bcd8a'] = $pane;
    $display->panels['center'][2] = 'new-ccece1cb-9ecb-4565-b52f-89aa987bcd8a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-87ae1465-faa2-450b-a0be-1a3623d3cbba';
  $panelizer->display = $display;
  $export['node:page:registration:default'] = $panelizer;

  return $export;
}
