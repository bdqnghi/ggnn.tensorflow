@Override
public void render() {
    time += Gdx.graphics.getDeltaTime();
    inputController.update();
    int gw = Gdx.graphics.getWidth(), gh = Gdx.graphics.getHeight();
    int pw = gw > gh ? gw / 2 : gw, ph = gw > gh ? gh : gh / 2;
    Gdx.gl.glClearColor(0, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    // cubemap
    Gdx.gl.glViewport(gw - pw, gh - ph, pw, ph);
    perspectiveCamera.viewportWidth = pw;
    perspectiveCamera.viewportHeight = ph;
    perspectiveCamera.update();
    modelBatch.begin(perspectiveCamera);
    modelBatch.render(instance, environment);
    modelBatch.end();
    // 2D texture with alpha & ETC1
    Gdx.gl.glViewport(0, 0, pw, ph);
    orthoCamera.viewportWidth = pw;
    orthoCamera.viewportHeight = ph;
    orthoCamera.update();
    batch.setProjectionMatrix(orthoCamera.combined);
    batch.begin();
    float s = 0.1f + 0.5f * (1 + MathUtils.sinDeg(time * 90.0f));
    float w = s * image.getWidth(), h = s * image.getHeight() / 2, x = -w / 2, y = -h / 2;
    batch.setShader(null);
    batch.disableBlending();
    batch.draw(image, -pw / 2, -ph / 2, pw, ph, 0, 1, 1, 0);
    batch.setShader(etc1aShader);
    batch.enableBlending();
    batch.draw(image, x, y, w, h, 0, 0.5f, 1, 0);
    batch.end();
}
