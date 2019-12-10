public DisplayMode getDesktopDisplayMode() {
    GlfwVideoMode mode = glfwGetVideoMode(getWindowMonitor());
    return new JglfwDisplayMode(mode.width, mode.height, 0, mode.redBits + mode.greenBits + mode.blueBits);
}
