<?php
/**
 * @file
 * survey.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function survey_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:node/add/big-test
  $menu_links['main-menu:node/add/big-test'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/big-test',
    'router_path' => 'node/add/big-test',
    'link_title' => 'TEST',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:node/add/test-form
  $menu_links['main-menu:node/add/test-form'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/test-form',
    'router_path' => 'node/add/test-form',
    'link_title' => 'Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:project-management
  $menu_links['main-menu:project-management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'project-management',
    'router_path' => 'project-management',
    'link_title' => 'PM View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:scientific-congress-support
  $menu_links['main-menu:scientific-congress-support'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'scientific-congress-support',
    'router_path' => 'scientific-congress-support',
    'link_title' => 'SCS View',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Form');
  t('Home');
  t('PM View');
  t('SCS View');
  t('TEST');


  return $menu_links;
}
