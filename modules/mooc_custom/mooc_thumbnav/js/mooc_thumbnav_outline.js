(function ($) {
  $(document).ready(function(){
    $('.thumbnav_controller img.mooc_thumbnav_outline').click(function(){
      var text = '';
      var title = $(this).attr('alt');
      if ($('#block-system-main-menu').length > 0) {
        text += $('#block-system-main-menu').html();
      }
      if ($('#block-cis-service-connection-active-outline').length > 0) {
        text += $('#block-cis-service-connection-active-outline').html();
      }
      Drupal.thumbnav.modal(title, text);
      // add click event for tinynav support it exists
      $('#thumbnav_modal select').change(function () {
        window.location.href = $(this).val();
      });
    });
  });
})(jQuery);