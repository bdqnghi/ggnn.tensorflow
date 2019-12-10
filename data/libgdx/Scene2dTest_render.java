public void render() {
    // System.out.println(meow.getValue());
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
    stage.getBatch().begin();
    patch.draw(stage.getBatch(), 300, 100, 126, 126);
    stage.getBatch().end();
}
