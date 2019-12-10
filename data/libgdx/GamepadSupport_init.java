public static void init(GamepadSupportListener listener) {
    GamepadSupport.listener = listener;
    nativeInit();
}
