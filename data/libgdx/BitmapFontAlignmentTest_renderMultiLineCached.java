private void renderMultiLineCached() {
    String text = "Multi Line\nCached";
    int lines = 2;
    float x = logoSprite.getX();
    float y = logoSprite.getY();
    float width = logoSprite.getWidth();
    float height = logoSprite.getHeight();
    // Obviously you wouldn't set the cache text every frame in real code.
    GlyphLayout layout = cache.setText(text, 0, 0);
    // Note that multi line text can be aligned:
    // cache.setText(text, 0, 0, width, Align.center, false);
    x += width / 2 - layout.width / 2;
    y += height / 2 + layout.height / 2;
    cache.setPosition(x, y);
    cache.draw(spriteBatch);
}
