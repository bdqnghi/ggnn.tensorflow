void render(long time) {
    graphics.frameStart(time);
    listener.render();
    glfwSwapBuffers(graphics.window);
}
