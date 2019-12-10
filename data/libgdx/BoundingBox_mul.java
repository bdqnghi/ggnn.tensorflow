/**
 * Multiplies the bounding box by the given matrix. This is achieved by multiplying the 8 corner points and then calculating
 * the minimum and maximum vectors from the transformed points.
 *
 * @param transform The matrix
 * @return This bounding box for chaining.
 */
public BoundingBox mul(Matrix4 transform) {
    final float x0 = min.x, y0 = min.y, z0 = min.z, x1 = max.x, y1 = max.y, z1 = max.z;
    inf();
    ext(tmpVector.set(x0, y0, z0).mul(transform));
    ext(tmpVector.set(x0, y0, z1).mul(transform));
    ext(tmpVector.set(x0, y1, z0).mul(transform));
    ext(tmpVector.set(x0, y1, z1).mul(transform));
    ext(tmpVector.set(x1, y0, z0).mul(transform));
    ext(tmpVector.set(x1, y0, z1).mul(transform));
    ext(tmpVector.set(x1, y1, z0).mul(transform));
    ext(tmpVector.set(x1, y1, z1).mul(transform));
    return this;
}
