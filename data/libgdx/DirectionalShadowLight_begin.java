public void begin() {
    final int w = fbo.getWidth();
    final int h = fbo.getHeight();
    fbo.begin();
    Gdx.gl.glViewport(0, 0, w, h);
    Gdx.gl.glClearColor(1, 1, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_SCISSOR_TEST);
    Gdx.gl.glScissor(1, 1, w - 2, h - 2);
}
