public void draw(PolygonSpriteBatch spriteBatch, float alphaModulation) {
    Color color = getColor();
    float oldAlpha = color.a;
    color.a *= alphaModulation;
    setColor(color);
    draw(spriteBatch);
    color.a = oldAlpha;
    setColor(color);
}
