@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    if (useStage) {
        stage.act(Gdx.graphics.getDeltaTime());
        stage.getBatch().disableBlending();
        Group root = stage.getRoot();
        Array<Actor> actors = root.getChildren();
        // for(int i = 0; i < actors.size(); i++) {
        // actors.get(i).rotation += 45 * Gdx.graphics.getDeltaTime();
        // }
        stage.draw();
    } else {
        batch.getProjectionMatrix().setToOrtho2D(0, 0, 24, 12);
        batch.getTransformMatrix().idt();
        batch.disableBlending();
        batch.begin();
        for (int i = 0; i < sprites.length; i++) {
            // sprites[i].rotate(45 * Gdx.graphics.getDeltaTime());
            sprites[i].draw(batch);
        }
        batch.end();
    }
    batch.getProjectionMatrix().setToOrtho2D(0, 0, 480, 320);
    batch.enableBlending();
    batch.begin();
    font.setColor(0, 0, 1, 1);
    font.getData().setScale(2);
    font.draw(batch, "fps: " + Gdx.graphics.getFramesPerSecond() + (useStage ? ", stage" : "sprite"), 10, 40);
    batch.end();
    if (Gdx.input.justTouched()) {
        useStage = !useStage;
    }
}
