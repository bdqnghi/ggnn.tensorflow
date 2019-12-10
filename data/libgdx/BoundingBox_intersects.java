/**
 * Returns whether the given bounding box is intersecting this bounding box (at least one point in).
 * @param b The bounding box
 * @return Whether the given bounding box is intersected
 */
public boolean intersects(BoundingBox b) {
    if (!isValid())
        return false;
    // test using SAT (separating axis theorem)
    float lx = Math.abs(this.cnt.x - b.cnt.x);
    float sumx = (this.dim.x / 2.0f) + (b.dim.x / 2.0f);
    float ly = Math.abs(this.cnt.y - b.cnt.y);
    float sumy = (this.dim.y / 2.0f) + (b.dim.y / 2.0f);
    float lz = Math.abs(this.cnt.z - b.cnt.z);
    float sumz = (this.dim.z / 2.0f) + (b.dim.z / 2.0f);
    return (lx <= sumx && ly <= sumy && lz <= sumz);
}
