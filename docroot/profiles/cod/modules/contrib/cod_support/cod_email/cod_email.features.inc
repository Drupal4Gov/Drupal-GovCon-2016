<?php
/**
 * @file
 * cod_email.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cod_email_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function cod_email_eck_bundle_info() {
  $items = array(
    'cod_email_invoice_reminder' => array(
      'machine_name' => 'cod_email_invoice_reminder',
      'entity_type' => 'cod_email',
      'name' => 'invoice_reminder',
      'label' => 'Invoice Reminder Email',
      'config' => array(
        'managed_properties' => array(
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
      ),
    ),
    'cod_email_ticket_code' => array(
      'machine_name' => 'cod_email_ticket_code',
      'entity_type' => 'cod_email',
      'name' => 'ticket_code',
      'label' => 'Send Ticket Code Email',
      'config' => array(
        'managed_properties' => array(
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
      ),
    ),
    'cod_email_ticket_redeemed' => array(
      'machine_name' => 'cod_email_ticket_redeemed',
      'entity_type' => 'cod_email',
      'name' => 'ticket_redeemed',
      'label' => 'Ticket Redeemed Email',
      'config' => array(
        'managed_properties' => array(
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function cod_email_eck_entity_type_info() {
  $items = array(
    'cod_email' => array(
      'name' => 'cod_email',
      'label' => 'cod_email',
      'properties' => array(
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}
