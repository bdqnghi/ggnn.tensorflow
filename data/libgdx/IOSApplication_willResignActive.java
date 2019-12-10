final void willResignActive(UIApplication uiApp) {
    Gdx.app.debug("IOSApplication", "paused");
    graphics.makeCurrent();
    graphics.pause();
    Gdx.gl.glFlush();
}
