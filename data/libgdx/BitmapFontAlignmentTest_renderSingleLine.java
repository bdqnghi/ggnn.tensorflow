private void renderSingleLine() {
    String text = "Single Line";
    float x = logoSprite.getX();
    float y = logoSprite.getY();
    float width = logoSprite.getWidth();
    float height = logoSprite.getHeight();
    layout.setText(font, text);
    x += width / 2 - layout.width / 2;
    y += height / 2 + layout.height / 2;
    font.draw(spriteBatch, text, x, y);
}
