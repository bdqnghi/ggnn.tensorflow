/**
 * Draws a rectange for the bounds of this actor if {@link #getDebug()} is true.
 */
protected void drawDebugBounds(ShapeRenderer shapes) {
    if (!debug)
        return;
    shapes.set(ShapeType.Line);
    shapes.setColor(stage.getDebugColor());
    shapes.rect(x, y, originX, originY, width, height, scaleX, scaleY, rotation);
}
