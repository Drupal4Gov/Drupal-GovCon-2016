<?php
/**
 * @file
 * dgc_extras.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function dgc_extras_field_default_field_bases_alter(&$data) {
  if (isset($data['field_dietary_needs'])) {
    $data['field_dietary_needs']['settings']['allowed_values']['None'] = 'None'; /* WAS: '' */
    unset($data['field_dietary_needs']['foreign keys']);
  }
  if (isset($data['field_t_shirt_size'])) {
    $data['field_t_shirt_size']['settings']['allowed_values']['2XL'] = '2XL'; /* WAS: '' */
    $data['field_t_shirt_size']['settings']['allowed_values']['Large'] = 'Large'; /* WAS: '' */
    $data['field_t_shirt_size']['settings']['allowed_values']['Small'] = 'Small'; /* WAS: '' */
    unset($data['field_t_shirt_size']['foreign keys']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Mens L']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Mens M']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Mens S']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Mens XL']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Mens XS']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Womens L']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Womens M']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Womens S']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Womens XL']);
    unset($data['field_t_shirt_size']['settings']['allowed_values']['Womens XS']);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function dgc_extras_field_group_info_alter(&$data) {
  if (isset($data['group_cod_profile_details|user|user|form'])) {
    $data['group_cod_profile_details|user|user|form']->data['weight'] = 13; /* WAS: 11 */
  }
  if (isset($data['group_cod_profile_social|user|user|form'])) {
    $data['group_cod_profile_social|user|user|form']->data['weight'] = 12; /* WAS: 10 */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function dgc_extras_field_default_field_instances_alter(&$data) {
  if (isset($data['user-user-field_profile_bio'])) {
    $data['user-user-field_profile_bio']['widget']['weight'] = 10; /* WAS: 8 */
  }
  if (isset($data['user-user-field_profile_interests'])) {
    $data['user-user-field_profile_interests']['widget']['weight'] = 11; /* WAS: 9 */
  }
  if (isset($data['user-user-field_profile_location'])) {
    unset($data['user-user-field_profile_location']);
  }
  if (isset($data['user-user-field_profile_org'])) {
    $data['user-user-field_profile_org']['widget']['weight'] = 7; /* WAS: 5 */
  }
  if (isset($data['user-user-field_profile_phone'])) {
    $data['user-user-field_profile_phone']['widget']['weight'] = 8; /* WAS: 6 */
  }
  if (isset($data['user-user-field_t_shirt_size'])) {
    $data['user-user-field_t_shirt_size']['description'] = 'All sizes listed are men\'s, so please select appropriately.'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function dgc_extras_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_user__user'])) {
    $data['field_bundle_settings_user__user']->value['extra_fields']['form']['ckeditor']['weight'] = 15; /* WAS: 12 */
    $data['field_bundle_settings_user__user']->value['extra_fields']['form']['contact'] = array(
      'weight' => 5,
    ); /* WAS: '' */
    $data['field_bundle_settings_user__user']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 17,
    ); /* WAS: '' */
    $data['field_bundle_settings_user__user']->value['extra_fields']['form']['timezone']['weight'] = 16; /* WAS: 14 */
  }
}
