/**
 * Called to draw the background, before clipping is applied (if enabled). Default implementation draws the background
 * drawable.
 */
protected void drawBackground(Batch batch, float parentAlpha, float x, float y) {
    if (background == null)
        return;
    Color color = getColor();
    batch.setColor(color.r, color.g, color.b, color.a * parentAlpha);
    background.draw(batch, x, y, getWidth(), getHeight());
}
