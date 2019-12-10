/**
 * @param other May be null.
 */
private void check(ShapeType preferred, ShapeType other, int newVertices) {
    if (shapeType == null)
        throw new IllegalStateException("begin must be called first.");
    if (shapeType != preferred && shapeType != other) {
        // Shape type is not valid.
        if (!autoShapeType) {
            if (other == null)
                throw new IllegalStateException("Must call begin(ShapeType." + preferred + ").");
            else
                throw new IllegalStateException("Must call begin(ShapeType." + preferred + ") or begin(ShapeType." + other + ").");
        }
        end();
        begin(preferred);
    } else if (matrixDirty) {
        // Matrix has been changed.
        ShapeType type = shapeType;
        end();
        begin(type);
    } else if (renderer.getMaxVertices() - renderer.getNumVertices() < newVertices) {
        // Not enough space.
        ShapeType type = shapeType;
        end();
        begin(type);
    }
}
