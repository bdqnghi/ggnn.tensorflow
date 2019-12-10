/**
 * Adds the canvas to the content pane. This triggers addNotify and starts the canvas' game loop.
 */
protected void addCanvas() {
    getContentPane().add(lwjglCanvas.getCanvas());
}
