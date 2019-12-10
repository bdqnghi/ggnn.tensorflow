@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    renderer.setProjectionMatrix(camera.combined);
    if (Gdx.input.isTouched())
        camera.unproject(globalCoords.set(Gdx.input.getX(), Gdx.input.getY(), 0));
    solveFakeIK(globalCoords);
    renderBones();
}
