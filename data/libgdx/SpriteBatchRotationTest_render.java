@Override
public void render() {
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    spriteBatch.draw(texture, 16, 10, 16, 16, 32, 32, 1, 1, 0, 0, 0, texture.getWidth(), texture.getHeight(), false, false);
    spriteBatch.draw(texture, 64, 10, 32, 32, 0, 0, texture.getWidth(), texture.getHeight(), false, false);
    spriteBatch.draw(texture, 112, 10, 0, 0, texture.getWidth(), texture.getHeight());
    spriteBatch.draw(texture, 16, 58, 16, 16, 32, 32, 1, 1, angle, 0, 0, texture.getWidth(), texture.getHeight(), false, false);
    spriteBatch.draw(texture, 64, 58, 16, 16, 32, 32, scale, scale, 0, 0, 0, texture.getWidth(), texture.getHeight(), false, false);
    spriteBatch.draw(texture, 112, 58, 16, 16, 32, 32, scale, scale, angle, 0, 0, texture.getWidth(), texture.getHeight(), false, false);
    spriteBatch.draw(texture, 160, 58, 0, 0, 32, 32, scale, scale, angle, 0, 0, texture.getWidth(), texture.getHeight(), false, false);
    spriteBatch.end();
    angle += 20 * Gdx.graphics.getDeltaTime();
    scale += vScale * Gdx.graphics.getDeltaTime();
    if (scale > 2) {
        vScale = -vScale;
        scale = 2;
    }
    if (scale < 0) {
        vScale = -vScale;
        scale = 0;
    }
}
