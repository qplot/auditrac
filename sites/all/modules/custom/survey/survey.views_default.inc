<?php
/**
 * @file
 * survey.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function survey_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'project_management';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Management';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date of Activity */
  $handler->display->display_options['fields']['field_survey_date_of_activity']['id'] = 'field_survey_date_of_activity';
  $handler->display->display_options['fields']['field_survey_date_of_activity']['table'] = 'field_data_field_survey_date_of_activity';
  $handler->display->display_options['fields']['field_survey_date_of_activity']['field'] = 'field_survey_date_of_activity';
  $handler->display->display_options['fields']['field_survey_date_of_activity']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Activities */
  $handler->display->display_options['fields']['field_survey_pm_activities']['id'] = 'field_survey_pm_activities';
  $handler->display->display_options['fields']['field_survey_pm_activities']['table'] = 'field_data_field_survey_pm_activities';
  $handler->display->display_options['fields']['field_survey_pm_activities']['field'] = 'field_survey_pm_activities';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_survey_pm_status']['id'] = 'field_survey_pm_status';
  $handler->display->display_options['fields']['field_survey_pm_status']['table'] = 'field_data_field_survey_pm_status';
  $handler->display->display_options['fields']['field_survey_pm_status']['field'] = 'field_survey_pm_status';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[delete_node], [edit_node], [view_node]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'test_form' => 'test_form',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_survey_category) */
  $handler->display->display_options['filters']['field_survey_category_value']['id'] = 'field_survey_category_value';
  $handler->display->display_options['filters']['field_survey_category_value']['table'] = 'field_data_field_survey_category';
  $handler->display->display_options['filters']['field_survey_category_value']['field'] = 'field_survey_category_value';
  $handler->display->display_options['filters']['field_survey_category_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_survey_category_value']['value'] = array(
    'Project Management' => 'Project Management',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-management';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Project Management View';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['project_management'] = $view;

  $view = new view();
  $view->name = 'scientific_congress_support';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SCS View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'SCS View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date of Activity */
  $handler->display->display_options['fields']['field_survey_date_of_activity']['id'] = 'field_survey_date_of_activity';
  $handler->display->display_options['fields']['field_survey_date_of_activity']['table'] = 'field_data_field_survey_date_of_activity';
  $handler->display->display_options['fields']['field_survey_date_of_activity']['field'] = 'field_survey_date_of_activity';
  $handler->display->display_options['fields']['field_survey_date_of_activity']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Name of Conference	 */
  $handler->display->display_options['fields']['field_survey_scs_name']['id'] = 'field_survey_scs_name';
  $handler->display->display_options['fields']['field_survey_scs_name']['table'] = 'field_data_field_survey_scs_name';
  $handler->display->display_options['fields']['field_survey_scs_name']['field'] = 'field_survey_scs_name';
  $handler->display->display_options['fields']['field_survey_scs_name']['label'] = 'Name';
  /* Field: Content: Days Attended */
  $handler->display->display_options['fields']['field_survey_scs_days']['id'] = 'field_survey_scs_days';
  $handler->display->display_options['fields']['field_survey_scs_days']['table'] = 'field_data_field_survey_scs_days';
  $handler->display->display_options['fields']['field_survey_scs_days']['field'] = 'field_survey_scs_days';
  $handler->display->display_options['fields']['field_survey_scs_days']['label'] = 'Days';
  /* Field: Content: Booth Support */
  $handler->display->display_options['fields']['field_survey_scs_booth']['id'] = 'field_survey_scs_booth';
  $handler->display->display_options['fields']['field_survey_scs_booth']['table'] = 'field_data_field_survey_scs_booth';
  $handler->display->display_options['fields']['field_survey_scs_booth']['field'] = 'field_survey_scs_booth';
  $handler->display->display_options['fields']['field_survey_scs_booth']['label'] = 'Booth';
  /* Field: Content: Gave a Presentation */
  $handler->display->display_options['fields']['field_survey_scs_presentation']['id'] = 'field_survey_scs_presentation';
  $handler->display->display_options['fields']['field_survey_scs_presentation']['table'] = 'field_data_field_survey_scs_presentation';
  $handler->display->display_options['fields']['field_survey_scs_presentation']['field'] = 'field_survey_scs_presentation';
  $handler->display->display_options['fields']['field_survey_scs_presentation']['label'] = 'Presentation';
  /* Field: Content: Poster Presentation */
  $handler->display->display_options['fields']['field_survey_scs_poster']['id'] = 'field_survey_scs_poster';
  $handler->display->display_options['fields']['field_survey_scs_poster']['table'] = 'field_data_field_survey_scs_poster';
  $handler->display->display_options['fields']['field_survey_scs_poster']['field'] = 'field_survey_scs_poster';
  $handler->display->display_options['fields']['field_survey_scs_poster']['label'] = 'Poster';
  /* Field: Content: Supported or Collaborated with KOL */
  $handler->display->display_options['fields']['field_survey_scs_kol']['id'] = 'field_survey_scs_kol';
  $handler->display->display_options['fields']['field_survey_scs_kol']['table'] = 'field_data_field_survey_scs_kol';
  $handler->display->display_options['fields']['field_survey_scs_kol']['field'] = 'field_survey_scs_kol';
  $handler->display->display_options['fields']['field_survey_scs_kol']['label'] = 'KOL';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[delete_node], [edit_node], [view_node]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'test_form' => 'test_form',
  );
  /* Filter criterion: Content: Category (field_survey_category) */
  $handler->display->display_options['filters']['field_survey_category_value']['id'] = 'field_survey_category_value';
  $handler->display->display_options['filters']['field_survey_category_value']['table'] = 'field_data_field_survey_category';
  $handler->display->display_options['filters']['field_survey_category_value']['field'] = 'field_survey_category_value';
  $handler->display->display_options['filters']['field_survey_category_value']['value'] = array(
    'Scientific Congress Support' => 'Scientific Congress Support',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'scientific-congress-support';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Scientific Conference Support';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['scientific_congress_support'] = $view;

  return $export;
}
