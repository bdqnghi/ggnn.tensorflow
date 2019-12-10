/**
 * Extends the bounding box by the given vector.
 *
 * @param x The x-coordinate
 * @param y The y-coordinate
 * @param z The z-coordinate
 * @return This bounding box for chaining.
 */
public BoundingBox ext(float x, float y, float z) {
    return this.set(min.set(min(min.x, x), min(min.y, y), min(min.z, z)), max.set(max(max.x, x), max(max.y, y), max(max.z, z)));
}
