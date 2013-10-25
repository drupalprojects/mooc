(function ($) {
  $(document).ready(function(){
    $('.thumbnav_controller img.mooc_thumbnav_outline').click(function(){
      if (!$(this).hasClass('mooc_thumbnav_outline-active')) {
        $(this).addClass('mooc_thumbnav_outline-active');
        $(this).attr('src', $(this).attr('src').replace('outline.png', 'outline-click.png'));
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
      }
      else {
        $('#thumbnav_modal_close').click();
      }
    });
    // visualize closing of the box
    $('#thumbnav_modal_close').click(function(){
      $('.thumbnav_controller img.mooc_thumbnav_outline').removeClass('mooc_thumbnav_outline-active');
      $('.thumbnav_controller img.mooc_thumbnav_outline').attr('src', $('.thumbnav_controller img.mooc_thumbnav_outline').attr('src').replace('outline-click.png', 'outline.png'));
    });
  });
})(jQuery);