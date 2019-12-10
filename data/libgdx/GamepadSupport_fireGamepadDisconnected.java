private static void fireGamepadDisconnected(int index) {
    if (listener != null) {
        listener.onGamepadDisconnected(index);
    }
}
