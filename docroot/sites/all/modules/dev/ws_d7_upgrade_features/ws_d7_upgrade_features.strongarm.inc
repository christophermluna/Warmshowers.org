<?php
/**
 * @file
 * ws_d7_upgrade_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ws_d7_upgrade_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style';
  $strongarm->value = 'naked';
  $export['advanced_forum_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_styled_node_types';
  $strongarm->value = array(
    'forum' => 'forum',
  );
  $export['advanced_forum_styled_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style_all_comments';
  $strongarm->value = 0;
  $export['advanced_forum_style_all_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style_only_forum_tagged';
  $strongarm->value = 1;
  $export['advanced_forum_style_only_forum_tagged'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advanced_forum_style_teasers';
  $strongarm->value = 0;
  $export['advanced_forum_style_teasers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_block';
  $strongarm->value = '0';
  $export['ant_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_forum';
  $strongarm->value = '0';
  $export['ant_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_block';
  $strongarm->value = '';
  $export['ant_pattern_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_forum';
  $strongarm->value = '';
  $export['ant_pattern_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_trust_referral';
  $strongarm->value = '<?php
  $uid = $node->field_member_i_trust[\'und\'][0][\'uid\'];
  $account =  user_load( $uid);
  $title = "Feedback for {$account->fullname} - username {$account->name} ({$uid})";
  return $title;
?>';
  $export['ant_pattern_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_block';
  $strongarm->value = 0;
  $export['ant_php_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_forum';
  $strongarm->value = 0;
  $export['ant_php_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_trust_referral';
  $strongarm->value = 1;
  $export['ant_php_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_trust_referral';
  $strongarm->value = '1';
  $export['ant_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'better_messages';
  $strongarm->value = array(
    'position' => 'center',
    'vertical' => '0',
    'horizontal' => '10',
    'fixed' => 1,
    'width' => '400px',
    'autoclose' => '12',
    'opendelay' => '0.3',
    'disable_autoclose' => 1,
    'show_countdown' => 1,
    'hover_autoclose' => 1,
    'popin' => array(
      'effect' => 'fadeIn',
      'duration' => 'slow',
    ),
    'popout' => array(
      'effect' => 'fadeIn',
      'duration' => 'slow',
    ),
    'jquery_ui' => array(
      'draggable' => '',
      'resizable' => 0,
    ),
    'extra' => array(
      'pages' => 'admin
admin/*',
      'visibility' => '0',
      'admin' => 0,
    ),
  );
  $export['better_messages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_block';
  $strongarm->value = 0;
  $export['comment_anonymous_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_forum';
  $strongarm->value = 0;
  $export['comment_anonymous_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_trust_referral';
  $strongarm->value = 0;
  $export['comment_anonymous_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_block';
  $strongarm->value = '1';
  $export['comment_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_block';
  $strongarm->value = '3';
  $export['comment_controls_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_forum';
  $strongarm->value = '3';
  $export['comment_controls_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_trust_referral';
  $strongarm->value = '3';
  $export['comment_controls_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_block';
  $strongarm->value = 1;
  $export['comment_default_mode_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_forum';
  $strongarm->value = 1;
  $export['comment_default_mode_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_trust_referral';
  $strongarm->value = 1;
  $export['comment_default_mode_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_block';
  $strongarm->value = '1';
  $export['comment_default_order_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_forum';
  $strongarm->value = '2';
  $export['comment_default_order_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_trust_referral';
  $strongarm->value = '1';
  $export['comment_default_order_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_block';
  $strongarm->value = '50';
  $export['comment_default_per_page_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_forum';
  $strongarm->value = '50';
  $export['comment_default_per_page_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_trust_referral';
  $strongarm->value = '50';
  $export['comment_default_per_page_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_block';
  $strongarm->value = 0;
  $export['comment_form_location_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_forum';
  $strongarm->value = 0;
  $export['comment_form_location_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_trust_referral';
  $strongarm->value = 0;
  $export['comment_form_location_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_forum';
  $strongarm->value = '2';
  $export['comment_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_block';
  $strongarm->value = '0';
  $export['comment_preview_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_forum';
  $strongarm->value = '1';
  $export['comment_preview_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_trust_referral';
  $strongarm->value = '2';
  $export['comment_preview_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_block';
  $strongarm->value = 1;
  $export['comment_subject_field_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_forum';
  $strongarm->value = 1;
  $export['comment_subject_field_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_trust_referral';
  $strongarm->value = 1;
  $export['comment_subject_field_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_trust_referral';
  $strongarm->value = '1';
  $export['comment_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_breadcrumbs_all';
  $strongarm->value = 0;
  $export['disable_breadcrumbs_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_breadcrumbs_node_paths';
  $strongarm->value = 'user
user/*
<front>';
  $export['disable_breadcrumbs_node_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_breadcrumbs_node_types';
  $strongarm->value = array(
    'blog' => 0,
    'block' => 0,
    'contest_photo' => 0,
    'faq' => 0,
    'trust_referral' => 0,
    'forum' => 0,
    'page' => 0,
    'poll' => 0,
    'product' => 0,
    'sitebuilding' => 0,
    'story' => 0,
    'tip' => 0,
  );
  $export['disable_breadcrumbs_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disable_breadcrumbs_node_types_all';
  $strongarm->value = array(
    'blog' => 'blog',
    'block' => 'block',
    'contest_photo' => 'contest_photo',
    'faq' => 'faq',
    'trust_referral' => 'trust_referral',
    'page' => 'page',
    'poll' => 'poll',
    'product' => 'product',
    'sitebuilding' => 'sitebuilding',
    'story' => 'story',
    'tip' => 'tip',
    'forum' => 0,
  );
  $export['disable_breadcrumbs_node_types_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'faq_path';
  $strongarm->value = 'faq';
  $export['faq_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__block';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'body' => array(
          'weight' => '-3',
        ),
        'revision_information' => array(
          'weight' => '0',
        ),
        'author' => array(
          'weight' => '1',
        ),
        'options' => array(
          'weight' => '2',
        ),
        'comment_settings' => array(
          'weight' => '4',
        ),
        'language' => array(
          'weight' => '-4',
        ),
        'translation' => array(
          'weight' => '5',
        ),
        'menu' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'nodewords' => array(
          'weight' => '-1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__forum';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'body' => array(
          'weight' => '0',
        ),
        'revision_information' => array(
          'weight' => '20',
        ),
        'author' => array(
          'weight' => '20',
        ),
        'options' => array(
          'weight' => '25',
        ),
        'comment_settings' => array(
          'weight' => '30',
        ),
        'menu' => array(
          'weight' => '-2',
        ),
        'taxonomy' => array(
          'weight' => '-3',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'nodewords' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__trust_referral';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'highlight' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-4',
        ),
        'body' => array(
          'weight' => '-2',
        ),
        'revision_information' => array(
          'weight' => '4',
        ),
        'author' => array(
          'weight' => '3',
        ),
        'options' => array(
          'weight' => '5',
        ),
        'comment_settings' => array(
          'weight' => '7',
        ),
        'menu' => array(
          'weight' => '-3',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'nodewords' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jammer_revision_log_textarea_unset_node_types';
  $strongarm->value = array(
    'contest_photo' => 'contest_photo',
    'trust_referral' => 'trust_referral',
    'forum' => 'forum',
  );
  $export['jammer_revision_log_textarea_unset_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_block';
  $strongarm->value = '2';
  $export['language_content_type_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_forum';
  $strongarm->value = '2';
  $export['language_content_type_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_trust_referral';
  $strongarm->value = '0';
  $export['language_content_type_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'HTMLMailSystem',
    'htmlmail' => 'HTMLMailSystem',
    'mailaview' => 'HTMLMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_block';
  $strongarm->value = array();
  $export['menu_options_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_forum';
  $strongarm->value = array(
    0 => 'navigation',
  );
  $export['menu_options_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_trust_referral';
  $strongarm->value = array(
    0 => 'navigation',
  );
  $export['menu_options_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_block';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_forum';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_trust_referral';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_block';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_forum';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_trust_referral';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_block';
  $strongarm->value = '1';
  $export['node_preview_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_contest_photo';
  $strongarm->value = 1;
  $export['node_preview_contest_photo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_faq';
  $strongarm->value = '1';
  $export['node_preview_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_forum';
  $strongarm->value = '0';
  $export['node_preview_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = 1;
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_poll';
  $strongarm->value = 1;
  $export['node_preview_poll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_product';
  $strongarm->value = 1;
  $export['node_preview_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_trust_referral';
  $strongarm->value = '1';
  $export['node_preview_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_block';
  $strongarm->value = 0;
  $export['node_submitted_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_faq';
  $strongarm->value = 0;
  $export['node_submitted_faq'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_forum';
  $strongarm->value = 1;
  $export['node_submitted_forum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_trust_referral';
  $strongarm->value = 1;
  $export['node_submitted_trust_referral'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'robotstxt';
  $strongarm->value = '#
# robots.txt
#
# This file is to prevent the crawling and indexing of certain parts
# of your site by web crawlers and spiders run by sites like Yahoo!
# and Google. By telling these "robots" where not to go on your site,
# you save bandwidth and server resources.
#
# This file will be ignored unless it is at the root of your host:
# Used:    http://example.com/robots.txt
# Ignored: http://example.com/site/robots.txt
#
# For more information about the robots.txt standard, see:
# http://www.robotstxt.org/robotstxt.html
#
# For syntax checking, see:
# http://www.frobee.com/robots-txt-check

User-agent: *
Crawl-delay: 10
# Directories
Disallow: /includes/
Disallow: /misc/
Disallow: /modules/
Disallow: /profiles/
Disallow: /scripts/
Disallow: /themes/
# Files
Disallow: /CHANGELOG.txt
Disallow: /cron.php
Disallow: /INSTALL.mysql.txt
Disallow: /INSTALL.pgsql.txt
Disallow: /INSTALL.sqlite.txt
Disallow: /install.php
Disallow: /INSTALL.txt
Disallow: /LICENSE.txt
Disallow: /MAINTAINERS.txt
Disallow: /update.php
Disallow: /UPGRADE.txt
Disallow: /xmlrpc.php
# Paths (clean URLs)
Disallow: /admin/
Disallow: /comment/reply/
Disallow: /filter/tips/
Disallow: /node/add/
Disallow: /search/
Disallow: /user/register/
Disallow: /user/password/
Disallow: /user/login/
Disallow: /user/logout/
# Paths (no clean URLs)
Disallow: /?q=admin/
Disallow: /?q=comment/reply/
Disallow: /?q=filter/tips/
Disallow: /?q=node/add/
Disallow: /?q=search/
Disallow: /?q=user/password/
Disallow: /?q=user/register/
Disallow: /?q=user/login/
Disallow: /?q=user/logout/
';
  $export['robotstxt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'wsuser' => 'wsuser',
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'wsuser';
  $export['search_default_module'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'slack_channel';
  $strongarm->value = '#dev-playground';
  $export['slack_channel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'slack_username';
  $strongarm->value = 'Warmshowers.org';
  $export['slack_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'warmshowers_zen';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_warmshowers_zen_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 0,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 0,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 1,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
  );
  $export['theme_warmshowers_zen_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'token_actions_extras_default_recipient_email';
  $strongarm->value = '[user:mail]';
  $export['token_actions_extras_default_recipient_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translatableregions_translate_selectors';
  $strongarm->value = 'div.account-body';
  $export['translatableregions_translate_selectors'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_credit_encryption_path';
  $strongarm->value = '../ubercart_encryption';
  $export['uc_credit_encryption_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product';
  $strongarm->value = 'uc_product_image';
  $export['uc_image_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_msg_continue_shopping';
  $strongarm->value = '<a href="[site:url]">Return to the Warmshowers.org dashboard.</a>';
  $export['uc_msg_continue_shopping'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_optional_checkout_review';
  $strongarm->value = 1;
  $export['uc_optional_checkout_review'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_product';
  $strongarm->value = 1;
  $export['uc_product_shippable_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'public://default_picture.jpg';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style_comments';
  $strongarm->value = '50w';
  $export['user_picture_style_comments'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_realm_list_language';
  $strongarm->value = array(
    0 => 'wsuser_notavailable_reminder_subject',
    1 => 'wsuser_notavailable_reminder_body',
    2 => 'wsuser_become_available_notification_subject',
    3 => 'wsuser_become_available_notification_body',
    4 => 'wsuser_registration_help',
    5 => 'ws_pm_email_notify_mandrill_reply_to_friendlyname',
    6 => 'faq_title',
    7 => 'faq_description',
    8 => 'faq_question_label',
    9 => 'faq_answer_label',
    10 => 'faq_back_to_top',
    11 => 'pm_email_notify_from',
    12 => 'pm_email_notify_subject',
    13 => 'pm_email_notify_body',
    14 => 'site_name',
    15 => 'site_slogan',
    16 => 'date_first_day',
    17 => 'user_default_timezone',
    18 => 'uc_msg_order_submit',
    19 => 'uc_msg_order_logged_in',
    20 => 'uc_msg_order_existing_user',
    21 => 'uc_msg_order_new_user',
    22 => 'uc_msg_order_new_user_logged_in',
    23 => 'uc_msg_continue_shopping',
    24 => 'uc_cart_new_account_details',
    25 => 'uc_checkout_instructions',
    26 => 'uc_checkout_review_instructions',
    27 => 'uc_check_policy',
    28 => 'uc_field_first_name',
    29 => 'uc_field_last_name',
    30 => 'uc_field_company',
    31 => 'uc_field_street1',
    32 => 'uc_field_street2',
    33 => 'uc_field_city',
    34 => 'uc_field_zone',
    35 => 'uc_field_postal_code',
    36 => 'uc_field_country',
    37 => 'uc_field_phone',
    38 => 'user_registration_help',
    39 => 'user_picture_dimensions',
    40 => 'user_picture_guidelines',
    41 => 'user_mail_register_admin_created_[mail_part]',
    42 => 'user_mail_register_no_approval_required_[mail_part]',
    43 => 'user_mail_register_pending_approval_[mail_part]',
    44 => 'user_mail_password_reset_[mail_part]',
    45 => 'user_mail_status_activated_[mail_part]',
    46 => 'user_mail_status_blocked_[mail_part]',
    47 => 'user_mail_cancel_confirm_[mail_part]',
    48 => 'user_mail_status_canceled_[mail_part]',
    49 => 'forum_nav_vocabulary',
  );
  $export['variable_realm_list_language'] = $strongarm;

  return $export;
}
