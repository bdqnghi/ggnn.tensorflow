/**
 * Returns the area contained within the polygon.
 */
public float area() {
    float[] vertices = getTransformedVertices();
    return GeometryUtils.polygonArea(vertices, 0, vertices.length);
}
