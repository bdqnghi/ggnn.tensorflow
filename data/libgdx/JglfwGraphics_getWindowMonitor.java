private long getWindowMonitor() {
    if (window != 0) {
        long monitor = glfwGetWindowMonitor(window);
        if (monitor != 0)
            return monitor;
    }
    return glfwGetPrimaryMonitor();
}
