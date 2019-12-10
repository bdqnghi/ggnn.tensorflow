/**
 * Returns the packed vertices, colors, and texture coordinates for this sprite.
 */
public float[] getVertices() {
    if (!dirty)
        return vertices;
    dirty = false;
    final float originX = this.originX;
    final float originY = this.originY;
    final float scaleX = this.scaleX;
    final float scaleY = this.scaleY;
    final PolygonRegion region = this.region;
    final float[] vertices = this.vertices;
    final float[] regionVertices = region.vertices;
    final float worldOriginX = x + originX;
    final float worldOriginY = y + originY;
    final float sX = width / region.region.getRegionWidth();
    final float sY = height / region.region.getRegionHeight();
    final float cos = MathUtils.cosDeg(rotation);
    final float sin = MathUtils.sinDeg(rotation);
    float fx, fy;
    for (int i = 0, v = 0, n = regionVertices.length; i < n; i += 2, v += 5) {
        fx = (regionVertices[i] * sX - originX) * scaleX;
        fy = (regionVertices[i + 1] * sY - originY) * scaleY;
        vertices[v] = cos * fx - sin * fy + worldOriginX;
        vertices[v + 1] = sin * fx + cos * fy + worldOriginY;
    }
    return vertices;
}
