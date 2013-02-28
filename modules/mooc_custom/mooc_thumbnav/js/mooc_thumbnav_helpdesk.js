(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('.thumbnav_controller img.mooc_thumbnav_helpdesk').click(function(){
      // trigger feedback reloaded click event
      $('#feedback_button').click();
    });
  });
})(jQuery);