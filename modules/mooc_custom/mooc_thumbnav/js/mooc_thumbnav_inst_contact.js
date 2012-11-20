(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('.thumbnav_controller .mooc_thumbnav_inst_contact').click(function(){
      var text = '';
      var title = $(this).attr('alt');
      if ($('#block-boxes-mooc-instructor-contact').length > 0) {
        text += $('#block-boxes-mooc-instructor-contact').html();
      }
      Drupal.thumbnav.modal(title, text);
    });
  });
})(jQuery);