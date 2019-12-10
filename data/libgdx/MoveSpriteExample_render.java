public void render() {
    // set the clear color and clear the screen.
    Gdx.gl.glClearColor(1, 1, 1, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    // draw the sprite
    batch.begin();
    batch.draw(texture, spritePosition.x, spritePosition.y);
    batch.end();
    // if a finger is down, set the sprite's x/y coordinate.
    if (Gdx.input.isTouched()) {
        // the unproject method takes a Vector3 in window coordinates (origin in
        // upper left corner, y-axis pointing down) and transforms it to world
        // coordinates.
        camera.unproject(spritePosition.set(Gdx.input.getX(), Gdx.input.getY(), 0));
    }
}
