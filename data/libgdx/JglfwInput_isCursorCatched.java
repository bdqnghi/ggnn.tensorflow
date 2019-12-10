public boolean isCursorCatched() {
    return glfwGetInputMode(app.graphics.window, GLFW_CURSOR_MODE) == GLFW_CURSOR_CAPTURED;
}
