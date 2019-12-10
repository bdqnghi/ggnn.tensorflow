@Override
public void draw(Batch batch, float parentAlpha) {
    validate();
    Color c = getColor();
    batch.setColor(c.r, c.g, c.b, c.a * parentAlpha);
    float x = getX();
    float y = getY();
    float w = getWidth();
    float h = getHeight();
    final Drawable bg = style.background;
    if (bg != null)
        bg.draw(batch, x, y, w, h);
    final Drawable knob = style.knob;
    if (knob != null) {
        x += knobPosition.x - knob.getMinWidth() / 2f;
        y += knobPosition.y - knob.getMinHeight() / 2f;
        knob.draw(batch, x, y, knob.getMinWidth(), knob.getMinHeight());
    }
}
