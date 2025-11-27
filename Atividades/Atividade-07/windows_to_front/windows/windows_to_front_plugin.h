#ifndef FLUTTER_PLUGIN_WINDOW_TO_FRONT_PLUGIN_H_
#define FLUTTER_PLUGIN_WINDOW_TO_FRONT_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace windows_to_front {

class WindowsToFrontPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  WindowsToFrontPlugin(flutter::PluginRegistrarWindows *registrar);

  virtual ~WindowsToFrontPlugin();

  // Disallow copy and assign.
  WindowsToFrontPlugin(const WindowsToFrontPlugin&) = delete;
  WindowsToFrontPlugin& operator=(const WindowsToFrontPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);

  // The registrar for this plugin, for accessing the window.
  flutter::PluginRegistrarWindows *registrar_;
};

}  // namespace window_to_front

#endif  // FLUTTER_PLUGIN_WINDOW_TO_FRONT_PLUGIN_H_
