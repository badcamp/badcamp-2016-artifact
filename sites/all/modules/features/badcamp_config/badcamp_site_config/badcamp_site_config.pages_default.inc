<?php
/**
 * @file
 * badcamp_site_config.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function badcamp_site_config_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_bc72b232-eb61-4e5e-97c7-c557c416dacf';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'BADCamp Layout',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Main Content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
          1 => 'navigation',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'navigation' => array(
        'type' => 'region',
        'title' => 'Navigation',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'footer' => NULL,
      'footer_' => NULL,
      'header' => NULL,
      'navigation' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4cf303f7-f9a6-4c5a-b587-cb8fac79eaed';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fb0097c1-7ac7-4777-aec5-3bc51e64b6f8';
    $pane->panel = 'footer';
    $pane->type = 'pane_messages';
    $pane->subtype = 'pane_messages';
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
    $pane->uuid = 'fb0097c1-7ac7-4777-aec5-3bc51e64b6f8';
    $display->content['new-fb0097c1-7ac7-4777-aec5-3bc51e64b6f8'] = $pane;
    $display->panels['footer'][0] = 'new-fb0097c1-7ac7-4777-aec5-3bc51e64b6f8';
    $pane = new stdClass();
    $pane->pid = 'new-2f76a66f-276b-4466-abe1-36e1d3a73920';
    $pane->panel = 'footer';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2f76a66f-276b-4466-abe1-36e1d3a73920';
    $display->content['new-2f76a66f-276b-4466-abe1-36e1d3a73920'] = $pane;
    $display->panels['footer'][1] = 'new-2f76a66f-276b-4466-abe1-36e1d3a73920';
    $pane = new stdClass();
    $pane->pid = 'new-e770b52e-e2c7-469c-a58e-b23535482bdb';
    $pane->panel = 'footer';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e770b52e-e2c7-469c-a58e-b23535482bdb';
    $display->content['new-e770b52e-e2c7-469c-a58e-b23535482bdb'] = $pane;
    $display->panels['footer'][2] = 'new-e770b52e-e2c7-469c-a58e-b23535482bdb';
    $pane = new stdClass();
    $pane->pid = 'new-50b7222d-85f5-4057-8427-4cec6010e707';
    $pane->panel = 'footer_';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '50b7222d-85f5-4057-8427-4cec6010e707';
    $display->content['new-50b7222d-85f5-4057-8427-4cec6010e707'] = $pane;
    $display->panels['footer_'][0] = 'new-50b7222d-85f5-4057-8427-4cec6010e707';
    $pane = new stdClass();
    $pane->pid = 'new-830d0c3d-b7ab-47d9-987e-a74921b266d3';
    $pane->panel = 'header';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
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
    $pane->uuid = '830d0c3d-b7ab-47d9-987e-a74921b266d3';
    $display->content['new-830d0c3d-b7ab-47d9-987e-a74921b266d3'] = $pane;
    $display->panels['header'][0] = 'new-830d0c3d-b7ab-47d9-987e-a74921b266d3';
    $pane = new stdClass();
    $pane->pid = 'new-b038817b-9b31-4545-8a2b-0f35e336fce3';
    $pane->panel = 'header';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'linked' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b038817b-9b31-4545-8a2b-0f35e336fce3';
    $display->content['new-b038817b-9b31-4545-8a2b-0f35e336fce3'] = $pane;
    $display->panels['header'][1] = 'new-b038817b-9b31-4545-8a2b-0f35e336fce3';
    $pane = new stdClass();
    $pane->pid = 'new-8d3a0851-1dd9-48b7-8ca2-3d520d0b5da8';
    $pane->panel = 'header';
    $pane->type = 'page_slogan';
    $pane->subtype = 'page_slogan';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8d3a0851-1dd9-48b7-8ca2-3d520d0b5da8';
    $display->content['new-8d3a0851-1dd9-48b7-8ca2-3d520d0b5da8'] = $pane;
    $display->panels['header'][2] = 'new-8d3a0851-1dd9-48b7-8ca2-3d520d0b5da8';
    $pane = new stdClass();
    $pane->pid = 'new-41e1e054-5337-4cf1-b2f4-598ca8597475';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'system-user-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41e1e054-5337-4cf1-b2f4-598ca8597475';
    $display->content['new-41e1e054-5337-4cf1-b2f4-598ca8597475'] = $pane;
    $display->panels['navigation'][0] = 'new-41e1e054-5337-4cf1-b2f4-598ca8597475';
    $pane = new stdClass();
    $pane->pid = 'new-c4c17bcd-eb8d-4818-a598-f0418aa7cbeb';
    $pane->panel = 'navigation';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c4c17bcd-eb8d-4818-a598-f0418aa7cbeb';
    $display->content['new-c4c17bcd-eb8d-4818-a598-f0418aa7cbeb'] = $pane;
    $display->panels['navigation'][1] = 'new-c4c17bcd-eb8d-4818-a598-f0418aa7cbeb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_bc72b232-eb61-4e5e-97c7-c557c416dacf'] = $handler;

  return $export;
}