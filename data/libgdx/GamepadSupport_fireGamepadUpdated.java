private static void fireGamepadUpdated(int index) {
    if (listener != null) {
        listener.onGamepadUpdated(index);
    }
}
