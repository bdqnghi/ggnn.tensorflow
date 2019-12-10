@Override
public void render() {
    Gdx.gl.glClearColor(0.2f, 0.2f, 0.2f, 1);
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.setToOrtho(false, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.setProjectionMatrix(camera.combined);
    batch.begin();
    float x = 10;
    float y = Gdx.graphics.getHeight() - 10;
    int renderCalls = 0;
    // inside the Enum in order to reduce allocations in the render loop.
    for (FontStyle style : FontStyle.values()) {
        for (FontSize size : FontSize.values()) {
            BitmapFont fnt = getFont(style, size);
            fnt.draw(batch, style.name() + " " + size.size + "pt: The quick brown fox jumps over the lazy dog", x, y);
            y -= fnt.getLineHeight() + 10;
        }
        y -= 20;
    }
    BitmapFont font = getFont(FontStyle.Regular, FontSize.Medium);
    font.draw(batch, text, 10, font.getCapHeight() + 10);
    // draw all glyphs in background
    batch.setColor(1f, 1f, 1f, 0.15f);
    batch.draw(packer.getPages().first().getTexture(), 0, 0);
    batch.setColor(1f, 1f, 1f, 1f);
    batch.end();
}
