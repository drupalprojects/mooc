(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('#thumbnav_controller .mooc_thumbnav_bookmark').click(function(){
      alert(Drupal.t('Bookmark this page'));
      // TODO: Handle bookmark request
    });
  });
})(jQuery);