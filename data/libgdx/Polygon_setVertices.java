/**
 * Sets the polygon's local vertices relative to the origin point, without any scaling, rotating or translations being applied.
 *
 * @param vertices float array where every even element represents the x-coordinate of a vertex, and the proceeding element
 *           representing the y-coordinate.
 * @throws IllegalArgumentException if less than 6 elements, representing 3 points, are provided
 */
public void setVertices(float[] vertices) {
    if (vertices.length < 6)
        throw new IllegalArgumentException("polygons must contain at least 3 points.");
    localVertices = vertices;
    dirty = true;
}
