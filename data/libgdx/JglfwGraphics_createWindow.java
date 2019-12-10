private boolean createWindow(int width, int height, boolean fullscreen) {
    if (fullscreen && fullscreenMonitor == 0)
        fullscreenMonitor = getWindowMonitor();
    glfwWindowHint(GLFW_VISIBLE, 0);
    glfwWindowHint(GLFW_RESIZABLE, resizable ? 1 : 0);
    glfwWindowHint(GLFW_UNDECORATED, undecorated ? 1 : 0);
    glfwWindowHint(GLFW_RED_BITS, bufferFormat.r);
    glfwWindowHint(GLFW_GREEN_BITS, bufferFormat.g);
    glfwWindowHint(GLFW_BLUE_BITS, bufferFormat.b);
    glfwWindowHint(GLFW_ALPHA_BITS, bufferFormat.a);
    glfwWindowHint(GLFW_DEPTH_BITS, bufferFormat.depth);
    glfwWindowHint(GLFW_STENCIL_BITS, bufferFormat.stencil);
    glfwWindowHint(GLFW_SAMPLES, bufferFormat.samples);
    boolean mouseCaptured = window != 0 && glfwGetInputMode(window, GLFW_CURSOR_MODE) == GLFW_CURSOR_CAPTURED;
    long oldWindow = window;
    long newWindow = glfwCreateWindow(width, height, title, fullscreen ? fullscreenMonitor : 0, oldWindow);
    if (newWindow == 0)
        return false;
    if (oldWindow != 0)
        glfwDestroyWindow(oldWindow);
    window = newWindow;
    this.width = Math.max(1, width);
    this.height = Math.max(1, height);
    this.fullscreen = fullscreen;
    if (!fullscreen) {
        if (x == -1 || y == -1) {
            DisplayMode mode = getDesktopDisplayMode();
            x = (mode.width - width) / 2;
            y = (mode.height - height) / 2;
        }
        glfwSetWindowPos(window, x, y);
    }
    // Prevent fullscreen from taking mouse.
    if (!mouseCaptured)
        glfwSetInputMode(window, GLFW_CURSOR_MODE, GLFW_CURSOR_NORMAL);
    glfwMakeContextCurrent(newWindow);
    setVSync(vSync);
    if (visible)
        glfwShowWindow(window);
    return true;
}
