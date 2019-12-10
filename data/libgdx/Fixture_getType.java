/**
 * Get the type of the child shape. You can use this to down cast to the concrete shape.
 * @return the shape type.
 */
public Type getType() {
    int type = jniGetType(addr);
    switch(type) {
        case 0:
            return Type.Circle;
        case 1:
            return Type.Edge;
        case 2:
            return Type.Polygon;
        case 3:
            return Type.Chain;
        default:
            throw new GdxRuntimeException("Unknown shape type!");
    }
}
