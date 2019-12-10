@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    // sort the sprites (not necessary if we know
    // the are already sorted).
    sprites.sort(comparator);
    // draw the sprites
    batch.begin();
    for (MySprite sprite : sprites) {
        sprite.draw(batch);
    }
    batch.end();
}
