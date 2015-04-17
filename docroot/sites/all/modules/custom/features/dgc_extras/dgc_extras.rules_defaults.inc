<?php
/**
 * @file
 * dgc_extras.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dgc_extras_default_rules_configuration() {
  $items = array();
  $items['rules_dgc_ticket_registration_thankyou'] = entity_import('rules_config', '{ "rules_dgc_ticket_registration_thankyou" : {
      "LABEL" : "Drupal GovCon ticket registration thankyou",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "DGC" ],
      "REQUIRES" : [ "rules", "ticket" ],
      "ON" : { "ticket_registration_insert" : [] },
      "DO" : [ { "redirect" : { "url" : "thankyou" } } ]
    }
  }');
  return $items;
}
