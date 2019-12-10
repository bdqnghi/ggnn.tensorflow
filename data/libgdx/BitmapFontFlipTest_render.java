@Override
public void render() {
    red.a = (red.a + Gdx.graphics.getDeltaTime() * 0.1f) % 1;
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    logoSprite.draw(spriteBatch);
    switch(renderMode) {
        case 0:
            font.getData().setScale(1);
            renderNormal("normal");
            break;
        case 1:
            font.getData().setScale(1);
            renderCached();
            break;
        case 2:
            font.getData().setScale(red.a + 0.5f);
            renderNormal("normal scaled");
            break;
        case 3:
            font.getData().setScale(1);
            renderCachedScaled();
            break;
    }
    spriteBatch.end();
}
