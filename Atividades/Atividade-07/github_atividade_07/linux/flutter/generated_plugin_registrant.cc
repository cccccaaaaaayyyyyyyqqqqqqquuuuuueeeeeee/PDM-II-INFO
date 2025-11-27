//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <url_launcher_linux/url_launcher_plugin.h>
#include <windows_to_front/windows_to_front_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) url_launcher_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "UrlLauncherPlugin");
  url_launcher_plugin_register_with_registrar(url_launcher_linux_registrar);
  g_autoptr(FlPluginRegistrar) windows_to_front_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowsToFrontPlugin");
  windows_to_front_plugin_register_with_registrar(windows_to_front_registrar);
}
