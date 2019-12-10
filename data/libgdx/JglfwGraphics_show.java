public void show() {
    visible = true;
    glfwShowWindow(window);
    Gdx.gl.glClearColor(initialBackgroundColor.r, initialBackgroundColor.g, initialBackgroundColor.b, initialBackgroundColor.a);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
}
