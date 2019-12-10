public void render() {
    time += Gdx.graphics.getDeltaTime();
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    renderer.begin(ShapeType.Line);
    renderer.rect(10, 10, 256, 256);
    renderer.end();
    batch.begin();
    // badlogic.draw(batch);
    // star.draw(batch);
    // font.draw(batch, "This font was packed!", 26, 65);
    badlogicSmall.draw(batch);
    // batch.draw(jumpAnimation.getKeyFrame(time, true), 100, 100);
    batch.end();
}
