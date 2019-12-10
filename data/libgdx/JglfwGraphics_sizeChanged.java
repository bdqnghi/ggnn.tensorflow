void sizeChanged(int width, int height) {
    if (isMac) {
        // This is required to refresh the NSOpenGLContext on OSX!
        glfwShowWindow(window);
    }
    width = Math.max(1, width);
    height = Math.max(1, height);
    this.width = width;
    this.height = height;
    Gdx.gl.glViewport(0, 0, width, height);
    ApplicationListener listener = Gdx.app.getApplicationListener();
    if (listener != null)
        listener.resize(width, height);
    requestRendering();
}
