/**
 * Draws this actor's debug lines if {@link #getDebug()} is true and, regardless of {@link #getDebug()}, calls
 * {@link Actor#drawDebug(ShapeRenderer)} on each child.
 */
public void drawDebug(ShapeRenderer shapes) {
    drawDebugBounds(shapes);
    if (transform)
        applyTransform(shapes, computeTransform());
    drawDebugChildren(shapes);
    if (transform)
        resetTransform(shapes);
}
