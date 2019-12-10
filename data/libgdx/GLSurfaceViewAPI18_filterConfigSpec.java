private int[] filterConfigSpec(int[] configSpec) {
    if (mEGLContextClientVersion != 2) {
        return configSpec;
    }
    /* We know none of the subclasses define EGL_RENDERABLE_TYPE.
             * And we know the configSpec is well formed.
             */
    int len = configSpec.length;
    int[] newConfigSpec = new int[len + 2];
    System.arraycopy(configSpec, 0, newConfigSpec, 0, len - 1);
    newConfigSpec[len - 1] = EGL10.EGL_RENDERABLE_TYPE;
    newConfigSpec[len] = 4;
    /* EGL_OPENGL_ES2_BIT */
    newConfigSpec[len + 1] = EGL10.EGL_NONE;
    return newConfigSpec;
}
