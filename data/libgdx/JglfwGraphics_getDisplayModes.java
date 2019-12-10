public DisplayMode[] getDisplayModes() {
    Array<DisplayMode> modes = new Array();
    for (GlfwVideoMode mode : glfwGetVideoModes(getWindowMonitor())) modes.add(new JglfwDisplayMode(mode.width, mode.height, 0, mode.redBits + mode.greenBits + mode.blueBits));
    return modes.toArray(DisplayMode.class);
}
