@Override
public void onSurfaceCreated(javax.microedition.khronos.opengles.GL10 gl, EGLConfig config) {
    eglContext = ((EGL10) EGLContext.getEGL()).eglGetCurrentContext();
    setupGL(gl);
    logConfig(config);
    updatePpi();
    Mesh.invalidateAllMeshes(app);
    Texture.invalidateAllTextures(app);
    Cubemap.invalidateAllCubemaps(app);
    ShaderProgram.invalidateAllShaderPrograms(app);
    FrameBuffer.invalidateAllFrameBuffers(app);
    logManagedCachesStatus();
    Display display = app.getWindowManager().getDefaultDisplay();
    this.width = display.getWidth();
    this.height = display.getHeight();
    this.mean = new WindowedMean(5);
    this.lastFrameTime = System.nanoTime();
    gl.glViewport(0, 0, this.width, this.height);
}
