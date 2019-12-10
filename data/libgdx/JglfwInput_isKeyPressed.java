public boolean isKeyPressed(int key) {
    if (key == Input.Keys.ANY_KEY)
        return pressedKeys > 0;
    if (key == Input.Keys.SYM)
        return glfwGetKey(app.graphics.window, GLFW_KEY_LEFT_SUPER) || glfwGetKey(app.graphics.window, GLFW_KEY_RIGHT_SUPER);
    return glfwGetKey(app.graphics.window, getJglfwKeyCode(key));
}
