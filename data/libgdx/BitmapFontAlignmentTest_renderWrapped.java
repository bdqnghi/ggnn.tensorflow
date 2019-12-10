private void renderWrapped() {
    String text = "Wrapped Wrapped Wrapped Wrapped";
    float x = logoSprite.getX();
    float y = logoSprite.getY();
    float width = logoSprite.getWidth();
    float height = logoSprite.getHeight();
    layout.setText(font, text, Color.WHITE, width, Align.left, true);
    x += width / 2 - layout.width / 2;
    y += height / 2 + layout.height / 2;
    font.draw(spriteBatch, text, x, y, width, Align.left, true);
// More efficient to draw the layout used for bounds:
// font.draw(spriteBatch, layout, x, y);
// Note that wrapped text can be aligned:
// font.draw(spriteBatch, text, x, y, width, Align.center, true);
}
