<?php
/**
 * @file
 * dgc_extras.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function dgc_extras_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_dietary_needs.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_dietary_needs.settings|allowed_values|None"] = 'None';
  $overrides["field_base.field_t_shirt_size.foreign keys"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|2XL"] = '2XL';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Large"] = 'Large';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens L"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens M"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens S"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens XL"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Mens XS"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Small"] = 'Small';
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens L"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens M"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens S"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens XL"]["DELETED"] = TRUE;
  $overrides["field_base.field_t_shirt_size.settings|allowed_values|Womens XS"]["DELETED"] = TRUE;

  // Exported overrides for: field_group
  $overrides["field_group.group_cod_profile_details|user|user|form.data|weight"] = 13;
  $overrides["field_group.group_cod_profile_social|user|user|form.data|weight"] = 12;

  // Exported overrides for: field_instance
  $overrides["field_instance.user-user-field_profile_bio.widget|weight"] = 10;
  $overrides["field_instance.user-user-field_profile_interests.widget|weight"] = 11;
  $overrides["field_instance.user-user-field_profile_location.user-user-field_profile_location"]["DELETED"] = TRUE;
  $overrides["field_instance.user-user-field_profile_org.widget|weight"] = 7;
  $overrides["field_instance.user-user-field_profile_phone.widget|weight"] = 8;
  $overrides["field_instance.user-user-field_t_shirt_size.description"] = 'All sizes listed are men\'s, so please select appropriately.';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|ckeditor|weight"] = 15;
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|contact"] = array(
    'weight' => 5,
  );
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|redirect"] = array(
    'weight' => 17,
  );
  $overrides["variable.field_bundle_settings_user__user.value|extra_fields|form|timezone|weight"] = 16;

  // Exported overrides for: views_view
  $overrides["views_view.cod_schedule.display|panel_pane_1|display_options|defaults|fields"] = FALSE;
  $overrides["views_view.cod_schedule.display|panel_pane_1|display_options|defaults|filter_groups"] = FALSE;
  $overrides["views_view.cod_schedule.display|panel_pane_1|display_options|defaults|filters"] = FALSE;
  $overrides["views_view.cod_schedule.display|panel_pane_1|display_options|defaults|relationships"] = FALSE;
  $overrides["views_view.cod_schedule.display|panel_pane_1|display_options|fields"] = array(
    'evttid' => array(
      'id' => 'evttid',
      'table' => 'cod_event_time',
      'field' => 'evttid',
      'exclude' => TRUE,
      'separator' => '',
    ),
    'field_evttime_date' => array(
      'id' => 'field_evttime_date',
      'table' => 'field_data_field_evttime_date',
      'field' => 'field_evttime_date',
      'label' => 'Day Tab',
      'exclude' => TRUE,
      'settings' => array(
        'format_type' => 'day_of_the_week',
        'fromto' => 'value',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_remaining_days' => 0,
      ),
    ),
    'field_evttime_date_1' => array(
      'id' => 'field_evttime_date_1',
      'table' => 'field_data_field_evttime_date',
      'field' => 'field_evttime_date',
      'ui_name' => 'Time: Date and time (Time slot day)',
      'label' => '',
      'element_label_colon' => FALSE,
      'settings' => array(
        'format_type' => 'day_of_the_week',
        'fromto' => 'both',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_remaining_days' => 0,
      ),
    ),
    'field_evttime_date_2' => array(
      'id' => 'field_evttime_date_2',
      'table' => 'field_data_field_evttime_date',
      'field' => 'field_evttime_date',
      'ui_name' => 'Time: Date and time (Time slot time)',
      'label' => '',
      'element_label_colon' => FALSE,
      'settings' => array(
        'format_type' => 'cod_time',
        'fromto' => 'both',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_remaining_days' => 0,
      ),
    ),
    'view' => array(
      'id' => 'view',
      'table' => 'views',
      'field' => 'view',
      'label' => '',
      'element_label_colon' => FALSE,
      'hide_empty' => TRUE,
      'view' => 'cod_schedule_content',
      'arguments' => '[!evttid]/session+schedule_item',
    ),
  );
  $overrides["views_view.cod_schedule.display|panel_pane_1|display_options|relationships"] = array(
    'og_membership_rel' => array(
      'id' => 'og_membership_rel',
      'table' => 'cod_event_time',
      'field' => 'og_membership_rel',
    ),
  );
  $overrides["views_view.cod_schedule_content.display|default|display_options|fields|field_experience"] = array(
    'id' => 'field_experience',
    'table' => 'field_data_field_experience',
    'field' => 'field_experience',
    'label' => '',
    'element_label_colon' => FALSE,
  );
  $overrides["views_view.cod_schedule_content.display|default|display_options|fields|og_vocabulary"] = array(
    'id' => 'og_vocabulary',
    'table' => 'field_data_og_vocabulary',
    'field' => 'og_vocabulary',
    'label' => '',
    'alter' => array(
      'alter_text' => TRUE,
      'text' => '<div class="track-icon-[og_vocabulary-target_id]">[og_vocabulary]</div>',
    ),
    'element_type' => 0,
    'element_label_colon' => FALSE,
    'element_wrapper_type' => 0,
    'element_default_classes' => FALSE,
    'settings' => array(
      'link' => 0,
    ),
  );

 return $overrides;
}
