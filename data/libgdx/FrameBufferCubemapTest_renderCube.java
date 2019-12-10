public void renderCube() {
    int w = Gdx.graphics.getWidth();
    int h = Gdx.graphics.getHeight();
    int x = (int) (w - w * 0.5f);
    int y = (int) (h - h * 0.5f);
    w *= 0.5f;
    h *= 0.5f;
    Gdx.gl.glViewport(x, y, w, h);
    Gdx.gl.glEnable(GL20.GL_SCISSOR_TEST);
    Gdx.gl.glScissor(x, y, w, h);
    Gdx.gl.glClearColor(1, 1, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    pitch += 25 * Gdx.graphics.getDeltaTime();
    yaw += 45 * Gdx.graphics.getDeltaTime();
    cubeInstance.transform.setFromEulerAngles(yaw, pitch, roll);
    cubeBatch.begin(camCube);
    cubeBatch.render(cubeInstance);
    cubeBatch.end();
}
