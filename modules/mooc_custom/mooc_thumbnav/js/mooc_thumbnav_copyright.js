(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('.thumbnav_controller img.mooc_thumbnav_copyright').click(function(){
      var text = '';
      var title = $(this).attr('alt');
      if ($('#boxes-box-site_footer').length > 0) {
        text += $('#boxes-box-site_footer').html();
      }
      Drupal.thumbnav.modal(title, text);
    });
  });
})(jQuery);