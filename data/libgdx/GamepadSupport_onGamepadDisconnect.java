private static void onGamepadDisconnect(Gamepad gamepad) {
    consoleLog("onGamepadDisconnect: " + gamepad.getId());
    gamepads.remove(gamepad.getIndex());
    fireGamepadDisconnected(gamepad.getIndex());
}
