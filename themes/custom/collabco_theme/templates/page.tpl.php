<div id="skipnav" class="element-invisible">
  <div class="container">
    <p>Skip to:</p>
    <ul>
      <li><a href="#content" class="element-invisible element-focusable"><?php print t('Skip to content'); ?></a></li>
      <?php if ($main_menu): ?>
      <li><a href="#main-menu" class="element-invisible element-focusable"><?php print t('Skip to navigation'); ?></a></li>
      <?php endif; ?>
    </ul>
  </div>
</div>
<!-- /#skipnav -->
<?php if ((($user->uid) && ($page['admin_shortcuts'])) || (($user->uid) && ($secondary_nav))): ?>
<div id="admin-shortcuts" class="admin-shortcuts clearfix"> <?php print render($secondary_nav); ?> <?php print render($page['admin_shortcuts']); ?> </div>
<?php endif; ?>
<!-- /#admin-shortcuts -->

<!-- new Header Top block -->
<?php if (($page['header_top_middle']) || ($page['search_box']) || ($page['header_bottom_left']) || ($page['header_bottom_right'])): ?>
  <div id="header" class="clearfix header" role="banner">
  <div class="container" id="header_container">
    <div class="row-fluid" id="header_top" >
        <?php if ($logo): ?>
        <div id="logo" class="span4 site-logo"> <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"> <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" role="presentation" /> </a>
        </div>
        <?php endif; ?>
        <?php if ($page['header_top_middle']): ?>
        <div id="header_top_middle" class="span6"> <?php print render($page['header_top_middle']); ?>
        </div>
        <?php endif; ?>
        <?php if ($page['search_box']): ?>
        <div id="search-box" class="span2 last"> <?php print render($page['search_box']); ?>
        </div>
        <?php endif; ?>
    </div>
    <div class="row-fluid" id="header_bottom">
        <?php if ($page['header_bottom_left']): ?>
        <div class="span6 "> <?php print render($page['header_bottom_left']); ?>
        </div>
        <?php endif; ?>
        <?php if ($page['header_bottom_right']): ?>
        <div id="header_bottom_right" class="span3 offset3 last"> <?php print render($page['header_bottom_right']); ?>
        </div>
        <?php endif; ?>
    </div>
   <?php if ($page['header']): ?>
   <div class="row-fluid">
        <div id="header-content" class="row-fluid header-content"><?php print render($page['header']); ?></div>
    </div>
        <!-- /#header-content -->
   <?php endif; ?>
 </div>
</div>
<?php endif; ?>
<!-- End of new Header Top block -->

<div id="main" class="clearfix main" role="main">
  <div class="container">
    <?php if ($breadcrumb): ?>
    <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>
    <?php if ($page['main_top']): ?>
    <div id="main-top" class="row-fluid main-top"> <?php print render($page['main_top']); ?> </div>
    <?php endif; ?>
    <?php if ($page['main_upper']): ?>
    <div id="main-upper" class="row-fluid main-upper"> <?php print render($page['main_upper']); ?> </div>
    <?php endif; ?>
    <div id="main-content" class="row main-content">
      <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-first" class="sidebar span4 site-sidebar-first">
        <div class="row-fluid"><?php print render($page['sidebar_first']); ?></div>
      </div>
      <!-- /#sidebar-first -->
      <?php endif; ?>
      <div id="content" class="mc-content <?php if (($page['sidebar_first']) && ($page['sidebar_second'])): print 'span6'; elseif (($page['sidebar_first']) || ($page['sidebar_second'])): print 'span8'; else: print 'span12'; endif; ?>">
        <div id="content-wrapper" class="content-wrapper">
          <div id="content-head" class="row-fluid content-head">
            <div id="highlighted" class="clearfix"><?php print render($page['highlighted']); ?></div>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?>
            <h1 class="title" id="page-title"> <?php print $title; ?> </h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($tabs): ?>
            <div class="tabs"> <?php print render($tabs); ?> </div>
            <?php endif; ?>
            <?php if ($messages): ?>
            <div id="console" class="clearfix"><?php print $messages; ?></div>
            <?php endif; ?>
            <?php if ($page['help']): ?>
            <div id="help" class="clearfix"> <?php print render($page['help']); ?> </div>
            <?php endif; ?>
            <?php if ($action_links): ?>
            <ul class="action-links">
              <?php print render($action_links); ?>
            </ul>
            <?php endif; ?>
          </div>
          <?php if ($page['content_top']): ?>
          <div id="content-top" class="row-fluid content-top"> <?php print render($page['content_top']); ?> </div>
          <?php endif; ?>
          <?php if ($page['content_upper']): ?>
          <div id="content-upper" class="row-fluid content-upper"> <?php print render($page['content_upper']); ?> </div>
          <?php endif; ?>
          <?php if ($page['content_row2']): ?>
          <div id="content-row2" class="row-fluid content-row2"> <?php print render($page['content_row2']); ?> </div>
          <?php endif; ?>
          <?php if (($page['content_col2-1']) || ($page['content_col2-2'])): ?>
          <div id="content-col2" class="row-fluid content-col2">
            <?php if ($page['content_col2-1']): ?>
            <div class="span6">
              <div id="content-col2-1" class="span12 clearfix clear-row"> <?php print render($page['content_col2-1']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col2-2']): ?>
            <div class="span6">
              <div id="content-col2-2" class="span12 clearfix clear-row"> <?php print render($page['content_col2-2']); ?> </div>
            </div>
            <?php endif; ?>
          </div>
          <?php endif; ?>
          <?php if ($page['content_row3']): ?>
          <div id="content-row3" class="row-fluid content-row3"> <?php print render($page['content_row3']); ?> </div>
          <?php endif; ?>
          <?php if (($page['content_col3-1']) || ($page['content_col3-2']) || ($page['content_col3-3'])): ?>
          <div id="content-col3" class="row-fluid content-col3">
            <?php if ($page['content_col3-1']): ?>
            <div class="span4">
              <div id="content-col3-1" class="span12 clearfix clear-row"> <?php print render($page['content_col3-1']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col3-2']): ?>
            <div class="span4">
              <div id="content-col3-2" class="span12 clearfix clear-row"> <?php print render($page['content_col3-2']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col3-3']): ?>
            <div class="span4">
              <div id="content-col3-3" class="span12 clearfix clear-row"> <?php print render($page['content_col3-3']); ?> </div>
            </div>
            <?php endif; ?>
          </div>
          <?php endif; ?>
          <?php if ($page['content_row4']): ?>
          <div id="content-row4" class="row-fluid content-row4"> <?php print render($page['content_row4']); ?> </div>
          <?php endif; ?>
          <?php if (($page['content_col4-1']) || ($page['content_col4-2']) || ($page['content_col4-3']) || ($page['content_col4-4'])): ?>
          <div id="content-col4" class="row-fluid content-col4">
            <?php if ($page['content_col4-1']): ?>
            <div class="span3">
              <div id="content-col4-1" class="span12 clearfix clear-row"> <?php print render($page['content_col4-1']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col4-2']): ?>
            <div class="span3">
              <div id="content-col4-2" class="span12 clearfix clear-row"> <?php print render($page['content_col4-2']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col4-3']): ?>
            <div class="span3">
              <div id="content-col4-3" class="span12 clearfix clear-row"> <?php print render($page['content_col4-3']); ?> </div>
            </div>
            <?php endif; ?>
            <?php if ($page['content_col4-4']): ?>
            <div class="span3">
              <div id="content-col4-4" class="span12 clearfix clear-row"> <?php print render($page['content_col4-4']); ?> </div>
            </div>
            <?php endif; ?>
          </div>
          <?php endif; ?>
          <?php if ($page['content_lower']): ?>
          <div id="content-lower" class="row-fluid content-lower"> <?php print render($page['content_lower']); ?> </div>
          <?php endif; ?>
          <?php if ($page['content_bottom']): ?>
          <div id="content-bottom" class="row-fluid content-bottom"> <?php print render($page['content_bottom']); ?> </div>
          <?php endif; ?>
        </div>
        <!-- /#content-wrap -->
      </div>
      <!-- /#content -->
      <?php if ($page['sidebar_second']): ?>
      <div id="sidebar-second" class="sidebar span4 site-sidebar-second">
        <div class="row-fluid"><?php print render($page['sidebar_second']); ?></div>
      </div>
      <!-- /#sidebar-second -->
      <?php endif; ?>
    </div>
    <?php if ($page['main_lower']): ?>
    <div id="main-lower" class="row-fluid main-lower"> <?php print render($page['main_lower']); ?> </div>
    <?php endif; ?>
    <?php if ($page['main_bottom']): ?>
    <div id="main-bottom" class="row-fluid main-bottom"> <?php print render($page['main_bottom']); ?> </div>
    <?php endif; ?>
  </div>
</div>
<!-- /#main, /#main-wrapper -->
<?php if ($page['footer']): ?>
<div id="footer" class="clearfix site-footer" role="contentinfo">
  <div class="container">
  <div id="footer-content" class="row-fluid footer-content"> <?php print render($page['footer']); ?></div>
  </div>
</div>
<!-- /#footer -->
<?php endif; ?>
