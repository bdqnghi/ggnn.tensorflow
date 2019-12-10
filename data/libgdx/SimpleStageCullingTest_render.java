public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.draw();
    // check how many actors are visible.
    Array<Actor> actors = stage.getActors();
    int numVisible = 0;
    for (int i = 0; i < actors.size; i++) {
        numVisible += ((CullableActor) actors.get(i)).visible ? 1 : 0;
    }
    batch.begin();
    font.draw(batch, "Visible: " + numVisible + ", fps: " + Gdx.graphics.getFramesPerSecond(), 20, 30);
    batch.end();
}
