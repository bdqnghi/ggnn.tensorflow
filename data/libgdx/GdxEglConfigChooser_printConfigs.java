private void printConfigs(EGL10 egl, EGLDisplay display, EGLConfig[] configs) {
    int numConfigs = configs.length;
    Log.w(TAG, String.format("%d configurations", numConfigs));
    for (int i = 0; i < numConfigs; i++) {
        Log.w(TAG, String.format("Configuration %d:\n", i));
        printConfig(egl, display, configs[i]);
    }
}
