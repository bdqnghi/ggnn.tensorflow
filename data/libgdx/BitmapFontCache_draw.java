public void draw(Batch spriteBatch, float alphaModulation) {
    if (alphaModulation == 1) {
        draw(spriteBatch);
        return;
    }
    Color color = getColor();
    float oldAlpha = color.a;
    color.a *= alphaModulation;
    setColors(color);
    draw(spriteBatch);
    color.a = oldAlpha;
    setColors(color);
}
