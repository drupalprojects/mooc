(function ($) {
  $(document).ready(function(){
    // if next is clicked go to the next page
    $('#thumbnav_controller .mooc_thumbnav_helpdesk').click(function(){
      alert(Drupal.t('Helpdesk clicked'));
      // TODO: Handle helpdesk requests on mobile
    });
  });
})(jQuery);