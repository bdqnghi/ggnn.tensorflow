@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT | GL20.GL_DEPTH_BUFFER_BIT);
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    cam.update();
    modelBatch.begin(cam);
    int visible = 0;
    for (int i = 0; i < instances.length; i++) {
        instances[i].transform.getTranslation(tmp);
        if (cam.frustum.sphereInFrustum(tmp, 1)) {
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
    Gdx.gl.glDisable(GL20.GL_DEPTH_TEST);
    batch.begin();
    for (int i = 0; i < instances.length; i++) {
        instances[i].transform.getTranslation(tmp);
        cam.project(tmp);
        if (tmp.z < 0)
            continue;
        batch.draw(logo, tmp.x, tmp.y);
    }
    batch.end();
}
