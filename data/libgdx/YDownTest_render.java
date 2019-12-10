@Override
public void render() {
    // clear the screen, update the camera and make the sprite batch
    // use its matrices.
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    batch.setProjectionMatrix(camera.combined);
    // render all the things, we render in a y-down
    // cartesian coordinate system
    batch.begin();
    // drawing a region, x and y will be the top left corner of the region, would be bottom left
    // with y-up.
    batch.draw(region, 20, 100);
    // drawing text, x and y will be the top left corner for text, same as with y-up
    font.draw(batch, "This is a test", 270, 100);
    // drawing regions from an atlas, x and y will be the top left corner.
    // you shouldn't call findRegion every frame, cache the result.
    batch.draw(atlas.findRegion("badlogicsmall"), 360, 100);
    // drawing a sprite created from an atlas, FIXME wut?! AtlasSprite#setPosition seems to be wrong
    sprite.setColor(Color.RED);
    sprite.draw(batch);
    // finally we draw our current touch/mouse coordinates
    font.draw(batch, Gdx.input.getX() + ", " + Gdx.input.getY(), 0, 0);
    batch.end();
    // tell the stage to act and draw itself
    stage.act(Gdx.graphics.getDeltaTime());
    stage.draw();
}
