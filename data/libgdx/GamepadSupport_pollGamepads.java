public static void pollGamepads() {
    JsArray<Gamepad> currentGamepads = nativePollGamepads();
    if (currentGamepads != null) {
        gamepadsTemp.clear();
        gamepadsTemp.putAll(gamepads);
        for (int i = 0, j = currentGamepads.length(); i < j; i++) {
            Gamepad gamepad = currentGamepads.get(i);
            if (gamepad != null) {
                if (!gamepadsTemp.containsKey(gamepad.getIndex())) {
                    onGamepadConnect(gamepad);
                }
                gamepadsTemp.remove(gamepad.getIndex());
            }
        }
        for (Gamepad gamepad : gamepadsTemp.values()) {
            onGamepadDisconnect(gamepad);
        }
    }
}
