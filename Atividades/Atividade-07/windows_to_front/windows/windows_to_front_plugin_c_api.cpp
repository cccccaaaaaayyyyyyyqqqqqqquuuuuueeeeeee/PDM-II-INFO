#include "include/windows_to_front/windows_to_front_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "windows_to_front_plugin.h"

void WindowsToFrontPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
windows_to_front::WindowsToFrontPlugin::RegisterWithRegistrar(
        flutter::PluginRegistrarManager::GetInstance()
                ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
