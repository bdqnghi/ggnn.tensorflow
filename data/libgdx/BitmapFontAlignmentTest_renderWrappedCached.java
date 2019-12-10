private void renderWrappedCached() {
    String text = "Wrapped Cached Wrapped Cached";
    float x = logoSprite.getX();
    float y = logoSprite.getY();
    float width = logoSprite.getWidth();
    float height = logoSprite.getHeight();
    // Obviously you wouldn't set the cache text every frame in real code.
    GlyphLayout layout = cache.setText(text, 0, 0, width, Align.left, true);
    // Note that wrapped text can be aligned:
    // cache.setWrappedText(text, 0, 0, width, HAlignment.CENTER);
    x += width / 2 - layout.width / 2;
    y += height / 2 + layout.height / 2;
    cache.setPosition(x, y);
    cache.draw(spriteBatch);
}
