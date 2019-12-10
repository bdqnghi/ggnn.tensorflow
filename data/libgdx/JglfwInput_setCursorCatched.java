public void setCursorCatched(boolean captured) {
    glfwSetInputMode(app.graphics.window, GLFW_CURSOR_MODE, captured ? GLFW_CURSOR_CAPTURED : GLFW_CURSOR_NORMAL);
}
