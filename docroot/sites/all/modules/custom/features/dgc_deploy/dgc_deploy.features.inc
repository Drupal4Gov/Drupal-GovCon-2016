<?php
/**
 * @file
 * dgc_deploy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dgc_deploy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_pages_alter().
 */
function dgc_deploy_default_page_manager_pages_alter(&$data) {
  if (isset($data['event_registration'])) {
    $data['event_registration']->access['settings'] = NULL; /* WAS: '' */
    $data['event_registration']->access['type'] = 'none'; /* WAS: '' */
    $data['event_registration']->default_handlers['page_event_registration__panel_context_ef9c7edf-6676-4d39-b6ef-3c7ce98858b7'] = (object) array(
          'disabled' => FALSE,
          'api_version' => 1,
          'name' => 'page_event_registration__panel_context_ef9c7edf-6676-4d39-b6ef-3c7ce98858b7',
          'task' => 'page',
          'subtask' => 'event_registration',
          'handler' => 'panel_context',
          'weight' => -30,
          'conf' => array(
            'title' => 'Drupal GovCon registration',
            'no_blocks' => 0,
            'pipeline' => 'ipe',
            'body_classes_to_remove' => '',
            'body_classes_to_add' => '',
            'css_id' => '',
            'css' => '',
            'contexts' => array(
              0 => array(
                'identifier' => 'User',
                'keyword' => 'user',
                'name' => 'user',
                'type' => 'current',
                'uid' => '',
                'id' => 1,
              ),
            ),
            'relationships' => array(),
            'display' => unserialize('O:14:"panels_display":16:{s:4:"args";a:0:{}s:7:"content";a:3:{s:40:"new-e4814e86-f90f-4df6-b40a-af26294404fb";O:8:"stdClass":14:{s:3:"pid";s:40:"new-e4814e86-f90f-4df6-b40a-af26294404fb";s:5:"panel";s:20:"bottom_right_content";s:4:"type";s:11:"views_panes";s:7:"subtype";s:24:"ticket_user-panel_pane_1";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:4:{s:7:"context";a:1:{i:0;s:14:"context_user_1";}s:14:"override_title";i:1;s:19:"override_title_text";s:25:"Tickets you\'ve registered";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"e4814e86-f90f-4df6-b40a-af26294404fb";}s:40:"new-54e43e9a-96ee-4a66-ba91-b05ca3b2c688";O:8:"stdClass":14:{s:3:"pid";s:40:"new-54e43e9a-96ee-4a66-ba91-b05ca3b2c688";s:5:"panel";s:12:"left_content";s:4:"type";s:12:"entity_field";s:7:"subtype";s:24:"node:field_event_tickets";s:5:"shown";b:1;s:6:"access";a:0:{}s:13:"configuration";a:10:{s:5:"label";s:6:"hidden";s:9:"formatter";s:11:"ticket_type";s:11:"delta_limit";s:1:"0";s:12:"delta_offset";s:1:"0";s:14:"delta_reversed";i:0;s:18:"formatter_settings";a:2:{s:11:"submit_text";s:8:"Register";s:16:"show_unavailable";i:0;}s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"54e43e9a-96ee-4a66-ba91-b05ca3b2c688";}s:40:"new-24a85338-7ad2-4779-be9b-c234673eaaa6";O:8:"stdClass":14:{s:3:"pid";s:40:"new-24a85338-7ad2-4779-be9b-c234673eaaa6";s:5:"panel";s:17:"top_right_content";s:4:"type";s:11:"views_panes";s:7:"subtype";s:28:"ticket_attendee-panel_pane_1";s:5:"shown";b:1;s:6:"access";a:1:{s:7:"plugins";a:1:{i:0;a:4:{s:4:"name";s:4:"role";s:8:"settings";a:1:{s:4:"rids";a:1:{i:0;i:1;}}s:7:"context";s:14:"context_user_1";s:3:"not";b:1;}}}s:13:"configuration";a:4:{s:7:"context";a:1:{i:0;s:14:"context_user_1";}s:14:"override_title";i:1;s:19:"override_title_text";s:12:"Your tickets";s:22:"override_title_heading";s:2:"h2";}s:5:"cache";a:0:{}s:5:"style";a:1:{s:8:"settings";N;}s:3:"css";a:0:{}s:6:"extras";a:0:{}s:8:"position";i:0;s:5:"locks";a:0:{}s:4:"uuid";s:36:"24a85338-7ad2-4779-be9b-c234673eaaa6";}}s:6:"panels";a:3:{s:20:"bottom_right_content";a:1:{i:0;s:40:"new-e4814e86-f90f-4df6-b40a-af26294404fb";}s:12:"left_content";a:1:{i:0;s:40:"new-54e43e9a-96ee-4a66-ba91-b05ca3b2c688";}s:17:"top_right_content";a:1:{i:0;s:40:"new-24a85338-7ad2-4779-be9b-c234673eaaa6";}}s:16:"incoming_content";N;s:6:"css_id";N;s:7:"context";a:0:{}s:3:"did";s:3:"new";s:8:"renderer";s:8:"standard";s:6:"layout";s:5:"hydra";s:15:"layout_settings";a:0:{}s:14:"panel_settings";a:1:{s:14:"style_settings";a:7:{s:7:"default";N;s:7:"preface";N;s:7:"content";N;s:6:"footer";N;s:12:"left_content";N;s:17:"top_right_content";N;s:20:"bottom_right_content";N;}}s:5:"cache";a:0:{}s:5:"title";s:24:"%node:title Registration";s:4:"uuid";s:36:"f1fa21f4-4b7a-4978-91b5-af69f96fe648";s:10:"hide_title";i:0;s:10:"title_pane";s:40:"new-54e43e9a-96ee-4a66-ba91-b05ca3b2c688";}'),
          ),
        ); /* WAS: '' */
    $data['event_registration']->default_handlers['page_event_registration_panel_context']->weight = -29; /* WAS: 0 */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function dgc_deploy_strongarm_alter(&$data) {
  if (isset($data['og_node_access_strict'])) {
    $data['og_node_access_strict']->value = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function dgc_deploy_views_default_views_alter(&$data) {
  if (isset($data['cod_news'])) {
    $data['cod_news']->display['panel_pane_1']->display_options['allow'] = array(
      'use_pager' => 0,
      'items_per_page' => 'items_per_page',
      'offset' => 0,
      'link_to_view' => 0,
      'more_link' => 0,
      'path_override' => 0,
      'title_override' => 0,
      'exposed_form' => 0,
      'fields_override' => 0,
    ); /* WAS: '' */
  }
  if (isset($data['cod_session_tracks'])) {
    $data['cod_session_tracks']->display['panel_pane_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:8:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:5:{s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:6:"fields";a:1:{s:4:"name";a:6:{s:2:"id";s:4:"name";s:5:"table";s:18:"taxonomy_term_data";s:5:"field";s:4:"name";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:16:"link_to_taxonomy";b:1;}}s:10:"pane_title";s:20:"Event Session Tracks";s:5:"allow";a:9:{s:9:"use_pager";i:0;s:14:"items_per_page";i:0;s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";i:0;s:15:"fields_override";i:0;}s:14:"argument_input";a:1:{s:12:"machine_name";a:6:{s:4:"type";s:4:"user";s:7:"context";s:21:"entity:comment.author";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:33:"Taxonomy vocabulary: Machine name";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_2";s:13:"display_title";s:12:"Content pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
  }
  if (isset($data['ticket_attendee'])) {
    $data['ticket_attendee']->display['panel_pane_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:6:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:2:{s:5:"empty";b:0;s:6:"fields";b:0;}s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:27:"You haven\'t registered yet!";s:6:"format";s:13:"filtered_html";}}s:6:"fields";a:4:{s:6:"entity";a:5:{s:2:"id";s:6:"entity";s:5:"table";s:11:"ticket_type";s:5:"field";s:6:"entity";s:12:"relationship";s:16:"ticket_type_ttid";s:5:"label";s:5:"Event";}s:17:"ticket_type_label";a:4:{s:2:"id";s:17:"ticket_type_label";s:5:"table";s:28:"field_data_ticket_type_label";s:5:"field";s:17:"ticket_type_label";s:12:"relationship";s:16:"ticket_type_ttid";}s:4:"name";a:5:{s:2:"id";s:4:"name";s:5:"table";s:5:"users";s:5:"field";s:4:"name";s:12:"relationship";s:10:"author_uid";s:5:"label";s:10:"Registrant";}s:7:"created";a:4:{s:2:"id";s:7:"created";s:5:"table";s:19:"ticket_registration";s:5:"field";s:7:"created";s:11:"date_format";s:4:"long";}}s:5:"allow";a:9:{s:9:"use_pager";i:0;s:14:"items_per_page";i:0;s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";i:0;s:15:"fields_override";i:0;}s:14:"argument_input";a:1:{s:8:"user_uid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:user.uid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:29:"Ticket registration: User_uid";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:12:"Content pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
  }
  if (isset($data['ticket_user'])) {
    $data['ticket_user']->display['panel_pane_1'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:4:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:1:{s:5:"empty";b:0;}s:5:"allow";a:9:{s:9:"use_pager";i:0;s:14:"items_per_page";i:0;s:6:"offset";i:0;s:12:"link_to_view";i:0;s:9:"more_link";i:0;s:13:"path_override";i:0;s:14:"title_override";s:14:"title_override";s:12:"exposed_form";i:0;s:15:"fields_override";i:0;}s:14:"argument_input";a:1:{s:10:"author_uid";a:6:{s:4:"type";s:7:"context";s:7:"context";s:15:"entity:user.uid";s:16:"context_optional";i:0;s:5:"panel";s:1:"0";s:5:"fixed";s:0:"";s:5:"label";s:31:"Ticket registration: Author_uid";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:12:"panel_pane_1";s:13:"display_title";s:12:"Content pane";s:14:"display_plugin";s:10:"panel_pane";s:8:"position";i:0;}'); /* WAS: '' */
  }
}
