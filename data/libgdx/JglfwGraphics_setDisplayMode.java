public boolean setDisplayMode(int width, int height, boolean fullscreen) {
    if (fullscreen || this.fullscreen) {
        boolean success = createWindow(width, height, fullscreen);
        if (success && fullscreen)
            sizeChanged(width, height);
        return success;
    }
    glfwSetWindowSize(window, width, height);
    return true;
}
