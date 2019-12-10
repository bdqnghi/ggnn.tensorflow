public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    drawn = 0;
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
    drawnLabel.setText("Drawn: " + drawn + "/" + count);
    drawnLabel.invalidateHierarchy();
}
