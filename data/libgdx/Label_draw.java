public void draw(Batch batch, float parentAlpha) {
    validate();
    Color color = tempColor.set(getColor());
    color.a *= parentAlpha;
    if (style.background != null) {
        batch.setColor(color.r, color.g, color.b, color.a);
        style.background.draw(batch, getX(), getY(), getWidth(), getHeight());
    }
    if (style.fontColor != null)
        color.mul(style.fontColor);
    cache.tint(color);
    cache.setPosition(getX(), getY());
    cache.draw(batch);
}
