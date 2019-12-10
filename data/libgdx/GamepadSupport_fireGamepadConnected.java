private static void fireGamepadConnected(int index) {
    if (listener != null) {
        listener.onGamepadConnected(index);
    }
}
