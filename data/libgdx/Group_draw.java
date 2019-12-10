/**
 * Draws the group and its children. The default implementation calls {@link #applyTransform(Batch, Matrix4)} if needed, then
 * {@link #drawChildren(Batch, float)}, then {@link #resetTransform(Batch)} if needed.
 */
public void draw(Batch batch, float parentAlpha) {
    if (transform)
        applyTransform(batch, computeTransform());
    drawChildren(batch, parentAlpha);
    if (transform)
        resetTransform(batch);
}
