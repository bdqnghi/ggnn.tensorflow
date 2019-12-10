private void renderSingleLineCached() {
    String text = "Single Line Cached";
    float x = logoSprite.getX();
    float y = logoSprite.getY();
    float width = logoSprite.getWidth();
    float height = logoSprite.getHeight();
    // Obviously you wouldn't set the cache text every frame in real code.
    GlyphLayout layout = cache.setText(text, 0, 0);
    cache.setColors(Color.BLUE, 1, 4);
    x += width / 2 - layout.width / 2;
    y += height / 2 + layout.height / 2;
    cache.setPosition(x, y);
    cache.draw(spriteBatch);
}
