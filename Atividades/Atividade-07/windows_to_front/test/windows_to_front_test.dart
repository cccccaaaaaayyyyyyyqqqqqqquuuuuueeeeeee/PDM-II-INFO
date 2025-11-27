import 'package:flutter_test/flutter_test.dart';
import 'package:windows_to_front/windows_to_front.dart';
import 'package:windows_to_front/windows_to_front_platform_interface.dart';
import 'package:windows_to_front/windows_to_front_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockWindowsToFrontPlatform
    with MockPlatformInterfaceMixin
    implements WindowsToFrontPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final WindowsToFrontPlatform initialPlatform = WindowsToFrontPlatform.instance;

  test('$MethodChannelWindowsToFront is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelWindowsToFront>());
  });

  test('getPlatformVersion', () async {
    WindowsToFront windowsToFrontPlugin = WindowsToFront();
    MockWindowsToFrontPlatform fakePlatform = MockWindowsToFrontPlatform();
    WindowsToFrontPlatform.instance = fakePlatform;

    expect(await windowsToFrontPlugin.getPlatformVersion(), '42');
  });
}
