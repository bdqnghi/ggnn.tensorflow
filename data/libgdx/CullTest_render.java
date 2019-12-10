@Override
public void render() {
    GL20 gl = Gdx.gl20;
    gl.glClearColor(0, 0, 0, 0);
    gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    gl.glEnable(GL20.GL_DEPTH_TEST);
    cam.update();
    modelBatch.begin(cam);
    int visible = 0;
    for (int i = 0; i < instances.length; i++) {
        instances[i].transform.getTranslation(pos);
        if (cam.frustum.sphereInFrustum(pos, 1)) {
            ((ColorAttribute) instances[i].materials.get(0).get(ColorAttribute.Diffuse)).color.set(Color.WHITE);
            visible++;
        } else {
            ((ColorAttribute) instances[i].materials.get(0).get(ColorAttribute.Diffuse)).color.set(Color.RED);
        }
        modelBatch.render(instances[i]);
    }
    modelBatch.end();
    if (Gdx.input.isKeyPressed(Keys.A))
        cam.rotate(20 * Gdx.graphics.getDeltaTime(), 0, 1, 0);
    if (Gdx.input.isKeyPressed(Keys.D))
        cam.rotate(-20 * Gdx.graphics.getDeltaTime(), 0, 1, 0);
    gl.glDisable(GL20.GL_DEPTH_TEST);
    batch.begin();
    font.draw(batch, "visible: " + visible + "/100" + ", fps: " + Gdx.graphics.getFramesPerSecond(), 0, 20);
    batch.end();
}
