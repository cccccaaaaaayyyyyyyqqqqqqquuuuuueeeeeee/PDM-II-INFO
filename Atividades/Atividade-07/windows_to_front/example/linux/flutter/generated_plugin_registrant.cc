//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <windows_to_front/windows_to_front_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) windows_to_front_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "WindowsToFrontPlugin");
  windows_to_front_plugin_register_with_registrar(windows_to_front_registrar);
}
