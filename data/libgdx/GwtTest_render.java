@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    texture.bind(0);
    shader.begin();
    shader.setUniformMatrix("u_projView", matrix);
    shader.setUniformi("u_texture", 0);
    mesh.render(shader, GL20.GL_TRIANGLES);
    shader.end();
    batch.begin();
    batch.draw(atlas.findRegion("font"), 0, 100);
    sprite.rotate(Gdx.graphics.getDeltaTime() * 45);
    for (Vector2 position : positions) {
        sprite.setPosition(position.x, position.y);
        sprite.draw(batch);
    }
    font.draw(batch, "fps:" + Gdx.graphics.getFramesPerSecond() + ", delta: " + Gdx.graphics.getDeltaTime() + ", #sprites: " + numSprites, 0, 30);
    cache.setPosition(200, 200);
    cache.draw(batch);
    batch.end();
}
