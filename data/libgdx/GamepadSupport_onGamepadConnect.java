private static void onGamepadConnect(Gamepad gamepad) {
    consoleLog("onGamepadConnect: " + gamepad.getId());
    gamepads.put(gamepad.getIndex(), gamepad);
    fireGamepadConnected(gamepad.getIndex());
}
