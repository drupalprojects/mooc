; Massively Open Online Course Make file
core = "7.x"
api = "2"

; comment this back in to use in local development
; projects[drupal][version] = "7.x"

; Modules
; Content Author
; workflow management to hide items
projects[hidden_nodes][subdir] = "contrib"
projects[hidden_nodes][version] = "1.0"
; Book outline UX improvements
projects[outline_designer][subdir] = "contrib"
projects[outline_designer][version] = "2.0-alpha3"
; Search and replace in Content
projects[scanner][subdir] = "contrib"
projects[scanner][version] = "1.x-dev"
; Text editor UX
projects[textbook][subdir] = "contrib"
projects[textbook][version] = "1.0-beta3"
; Text editor API
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.x-dev"
; Reusable HTML/CSS templates
projects[wysiwyg_template][subdir] = "contrib"
projects[wysiwyg_template][version] = "2.8"
; Clean file upload manager
projects[imce][subdir] = "contrib"
projects[imce][version] = "1.5"
; Crop images during upload
projects[imce_crop][subdir] = "contrib"
projects[imce_crop][version] = "1.0"
; Make directories in the file upload area
projects[imce_mkdir][subdir] = "contrib"
projects[imce_mkdir][version] = "1.0"
; Bridge to text editor button
projects[imce_wysiwyg][subdir] = "contrib"
projects[imce_wysiwyg][version] = "1.0"
; popup images / media for display
projects[lightbox2][subdir] = "contrib"
projects[lightbox2][version] = "1.0-beta1"
; improvements to input formats
projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.0-beta1"
; alter the book title in menus
projects[book_title_override][subdir] = "contrib"
projects[book_title_override][version] = "1.0-beta4"
; internal linking to nodes, users and taxonomy
projects[ckeditor_link][subdir] = "contrib"
projects[ckeditor_link][version] = "2.2"
; content form clean up
projects[jammer][version] = "1.2"
projects[jammer][subdir] = "contrib"

; Site Building
; create nice looking paths for entities
projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"
; visual styling of groupings of fields
projects[field_group][version] = "1.1"
projects[field_group][subdir] = "contrib"
; date widgets
projects[date][subdir] = "contrib"
projects[date][version] = "2.6"
; composite field
projects[field_collection][version] = "1.0-beta4"
projects[field_collection][subdir] = "contrib"
; make fields that reference entities
projects[entityreference][version] = "1.0-rc5"
projects[entityreference][subdir] = "contrib"
; allow prepopulating based on URL format for entity references
projects[entityreference_prepopulate][version] = "1.1"
projects[entityreference_prepopulate][subdir] = "contrib"
; allow prepopulating of other fields based on URL format
projects[prepopulate][version] = "2.x-dev"
projects[prepopulate][subdir] = "contrib"
; UX improvement for highlighting and referencing content in content
projects[nodereference_highlight][version] = "1.0-alpha1"
projects[nodereference_highlight][subdir] = "contrib"
; Color picker widget
projects[jquery_colorpicker][subdir] = "contrib"
projects[jquery_colorpicker][version] = "1.0-rc1"
; Enhanced node edit forms
projects[nodeformcols][subdir] = "contrib"
projects[nodeformcols][version] = "1.x-dev"
; Provide better names for values / settings / titles for education
projects[stringoverrides][subdir] = "contrib"
projects[stringoverrides][version] = "1.8"
; makes it easier to define select lists in fields
projects[options_element][subdir] = "contrib"
projects[options_element][version] = "1.8"
; Special field for checkboxes to have other option with textfield
projects[select_or_other][version] = "2.15"
projects[select_or_other][subdir] = "contrib"
; Book outline layout / presentation at different levels
projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = "2.3"
; Change the theme based on different criteria
projects[themekey][subdir] = "contrib"
projects[themekey][version] = "2.3"
; Embed videos from external sources by knowing the URL
projects[video_filter][subdir] = "contrib"
projects[video_filter][version] = "3.x-dev"
; Display data in different formats
projects[views][subdir] = "contrib"
projects[views][version] = "3.5"

; Site Administration
; Admin UX
projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "1.7"
; Fake another user login
projects[masquerade][subdir] = "contrib"
projects[masquerade][version] = "1.0-rc4"
; dropdown admin menu
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc3"
; admin theme options
projects[admin_theme][subdir] = "contrib"
projects[admin_theme][version] = "1.0"
; display blocks under different criteria
projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta4"
; exportable version of blocks
projects[boxes][subdir] = "contrib"
projects[boxes][version] = "1.0"
; Prints nicer help documentation
projects[advanced_help][version] = "1.0"
projects[advanced_help][subdir] = "contrib"

; Content migration
; Import data from external sources
projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-alpha6"
; Map book outlines to feed data
projects[feeds_node_helper][subdir] = "contrib"
projects[feeds_node_helper][version] = "1.2"
; Convert values before import
projects[feeds_tamper][subdir] = "contrib"
projects[feeds_tamper][version] = "1.0-beta4"
; import XML documents and walk them
projects[feeds_xpathparser][subdir] = "contrib"
projects[feeds_xpathparser][version] = "1.0-beta3"

; Development
; export settings to contribute back to the project
projects[profiler_builder][subdir] = "contrib"
projects[profiler_builder][version] = "1.0-beta2"
; Developer tools
projects[devel][subdir] = "contrib"
projects[devel][version] = "1.3"
; Package and deploy functionality
projects[features][subdir] = "contrib"
projects[features][version] = "1.0"
; develop features faster
projects[ftools][subdir] = "contrib"
projects[ftools][version] = "1.6"
; Best practice
projects[backup_migrate][version] = "2.4"
projects[backup_migrate][subdir] = "contrib"

; APIs
; required by feeds
projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"
; Inject block regions across themes
projects[regions][subdir] = "contrib"
projects[regions][version] = "1.4"
; Override packaged variables
projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"
; Token enhancement
projects[token][subdir] = "contrib"
projects[token][version] = "1.4"
; Accept non UTF characters successfully
projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.1"
; University IDs for migrations / relations
projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.x-dev"
; Library importing
projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.0"
; Show difference between objects
projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0"
; Enhancements
projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-rc4"
; needed for views / features / everything else
projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

; Theme development
; exporting tools for omega
projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = "3.0-rc4"
; additional blocks
projects[delta][subdir] = "contrib"
projects[delta][version] = "3.0-beta11"
; Responsive display of a grid
projects[views_fluid_grid][version] = "3.0"
projects[views_fluid_grid][subdir] = "contrib"
; Responsive menu switches to mobile friendly mode
projects[tinynav][version] = "1.1"
projects[tinynav][subdir] = "contrib"

; specific settings for themes
projects[context_condition_theme][subdir] = "contrib"
projects[context_condition_theme][version] = "1.0"

; chamfer default layouts
projects[chamfer_defaults][subdir] = "contrib"
projects[chamfer_defaults][version] = "1.0-beta2"

; Themes

; Admin theme
projects[rubik][version] = "4.0-beta8"
projects[rubik][type] = "theme"
projects[rubik][subdir] = "contrib"

; Base theme to rubik
projects[tao][version] = "3.0-beta4"
projects[tao][type] = "theme"
projects[tao][subdir] = "contrib"

; Responsive base theme to chamfer
projects[omega][version] = "3.1"
projects[omega][type] = "theme"
projects[omega][subdir] = "contrib"

; Clean, responsive and accessible sub-theme from omega
projects[chamfer][version] = "1.0-beta5"
projects[chamfer][type] = "theme"
projects[chamfer][subdir] = "contrib"

; Libraries

; Color picker for use with jquery_colorpicker
libraries[colorpicker][download][type] = "get"
libraries[colorpicker][download][url] = "http://www.eyecon.ro/colorpicker/colorpicker.zip"
libraries[colorpicker][directory_name] = "colorpicker"
libraries[colorpicker][type] = "library"
libraries[colorpicker][destination] = "libraries"

; CKEditor for use as WYSIWYG default text editor
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.4/ckeditor_3.6.4.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

; Profiler install profile API
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"
libraries[profiler][directory_name] = "profiler"
libraries[profiler][type] = "library"

; Patches
; Fixes warning message in Scanner module
projects[scanner][patch][] = "http://drupal.org/files/strict-variable-by-reference.patch"