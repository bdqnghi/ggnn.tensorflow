@Override
public void render() {
    Gdx.gl.glClearColor(0.7f, 0, 0, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    spriteBatch.begin();
    logoSprite.draw(spriteBatch);
    switch(renderMode) {
        case 0:
            renderSingleLine();
            break;
        case 1:
            renderSingleLineCached();
            break;
        case 2:
            renderWrapped();
            break;
        case 3:
            renderWrappedCached();
            break;
        case 4:
            renderMultiLine();
            break;
        case 5:
            renderMultiLineCached();
            break;
    }
    spriteBatch.end();
}
