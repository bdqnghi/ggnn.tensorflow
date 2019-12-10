/**
 * Merges this rectangle with a list of points. The rectangle should not have negative width or negative height.
 * @param vecs the vectors describing the points
 * @return this rectangle for chaining
 */
public Rectangle merge(Vector2[] vecs) {
    float minX = x;
    float maxX = x + width;
    float minY = y;
    float maxY = y + height;
    for (int i = 0; i < vecs.length; ++i) {
        Vector2 v = vecs[i];
        minX = Math.min(minX, v.x);
        maxX = Math.max(maxX, v.x);
        minY = Math.min(minY, v.y);
        maxY = Math.max(maxY, v.y);
    }
    x = minX;
    width = maxX - minX;
    y = minY;
    height = maxY - minY;
    return this;
}
