public static void pollGamepadsStatus() {
    for (Gamepad gamepad : gamepads.values()) {
        if (gamepad.getPreviousTimestamp() != gamepad.getTimestamp()) {
            fireGamepadUpdated(gamepad.getIndex());
        }
        gamepad.setPreviousTimestamp(gamepad.getTimestamp());
    }
}
