/**
 * Returns an axis-aligned bounding box of this polygon.
 *
 * Note the returned Rectangle is cached in this polygon, and will be reused if this Polygon is changed.
 *
 * @return this polygon's bounding box {@link Rectangle}
 */
public Rectangle getBoundingRectangle() {
    float[] vertices = getTransformedVertices();
    float minX = vertices[0];
    float minY = vertices[1];
    float maxX = vertices[0];
    float maxY = vertices[1];
    final int numFloats = vertices.length;
    for (int i = 2; i < numFloats; i += 2) {
        minX = minX > vertices[i] ? vertices[i] : minX;
        minY = minY > vertices[i + 1] ? vertices[i + 1] : minY;
        maxX = maxX < vertices[i] ? vertices[i] : maxX;
        maxY = maxY < vertices[i + 1] ? vertices[i + 1] : maxY;
    }
    if (bounds == null)
        bounds = new Rectangle();
    bounds.x = minX;
    bounds.y = minY;
    bounds.width = maxX - minX;
    bounds.height = maxY - minY;
    return bounds;
}
