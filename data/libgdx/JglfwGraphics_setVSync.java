public void setVSync(boolean vsync) {
    this.vSync = vsync;
    glfwSwapInterval(vsync ? 1 : 0);
}
