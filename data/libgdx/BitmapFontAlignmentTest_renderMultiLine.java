private void renderMultiLine() {
    String text = "Multi\nLine";
    float x = logoSprite.getX();
    float y = logoSprite.getY();
    float width = logoSprite.getWidth();
    float height = logoSprite.getHeight();
    layout.setText(font, text);
    x += width / 2 - layout.width / 2;
    y += height / 2 + layout.height / 2;
    font.draw(spriteBatch, text, x, y);
// Note that multi line text can be aligned:
// font.draw(spriteBatch, text, x, y, width, Align.center, false);
}
