protected View createGLSurfaceView(AndroidApplicationBase application, final ResolutionStrategy resolutionStrategy) {
    if (!checkGL20())
        throw new GdxRuntimeException("Libgdx requires OpenGL ES 2.0");
    EGLConfigChooser configChooser = getEglConfigChooser();
    int sdkVersion = android.os.Build.VERSION.SDK_INT;
    if (sdkVersion <= 10 && config.useGLSurfaceView20API18) {
        GLSurfaceView20API18 view = new GLSurfaceView20API18(application.getContext(), resolutionStrategy);
        if (configChooser != null)
            view.setEGLConfigChooser(configChooser);
        else
            view.setEGLConfigChooser(config.r, config.g, config.b, config.a, config.depth, config.stencil);
        view.setRenderer(this);
        return view;
    } else {
        GLSurfaceView20 view = new GLSurfaceView20(application.getContext(), resolutionStrategy);
        if (configChooser != null)
            view.setEGLConfigChooser(configChooser);
        else
            view.setEGLConfigChooser(config.r, config.g, config.b, config.a, config.depth, config.stencil);
        view.setRenderer(this);
        return view;
    }
}
