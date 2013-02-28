(function ($) {
  $(document).ready(function(){
    $('.thumbnav_controller img.mooc_thumbnav_inst_contact').click(function(){
      var text = '';
      var title = '';
      if ($('#block-cis-service-connection-instructor-contact').length > 0) {
        text += $('#block-cis-service-connection-instructor-contact').html();
      }
      Drupal.thumbnav.modal(title, text);
    });
  });
})(jQuery);