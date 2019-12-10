public void set(ShapeType type) {
    if (shapeType == type)
        return;
    if (shapeType == null)
        throw new IllegalStateException("begin must be called first.");
    if (!autoShapeType)
        throw new IllegalStateException("autoShapeType must be enabled.");
    end();
    begin(type);
}
