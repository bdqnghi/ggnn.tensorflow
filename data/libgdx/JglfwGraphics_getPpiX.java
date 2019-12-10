public float getPpiX() {
    // return getWidth() / (glfwGetMonitorPhysicalWidth(getWindowMonitor()) * 0.03937f); // mm to inches
    return Toolkit.getDefaultToolkit().getScreenResolution();
}
