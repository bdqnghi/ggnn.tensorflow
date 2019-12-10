/**
 * Quick check whether the given {@link Ray} and {@link BoundingBox} intersect.
 *
 * @param ray The ray
 * @param center The center of the bounding box
 * @param dimensions The dimensions (width, height and depth) of the bounding box
 * @return Whether the ray and the bounding box intersect.
 */
static public boolean intersectRayBoundsFast(Ray ray, Vector3 center, Vector3 dimensions) {
    final float divX = 1f / ray.direction.x;
    final float divY = 1f / ray.direction.y;
    final float divZ = 1f / ray.direction.z;
    float minx = ((center.x - dimensions.x * .5f) - ray.origin.x) * divX;
    float maxx = ((center.x + dimensions.x * .5f) - ray.origin.x) * divX;
    if (minx > maxx) {
        final float t = minx;
        minx = maxx;
        maxx = t;
    }
    float miny = ((center.y - dimensions.y * .5f) - ray.origin.y) * divY;
    float maxy = ((center.y + dimensions.y * .5f) - ray.origin.y) * divY;
    if (miny > maxy) {
        final float t = miny;
        miny = maxy;
        maxy = t;
    }
    float minz = ((center.z - dimensions.z * .5f) - ray.origin.z) * divZ;
    float maxz = ((center.z + dimensions.z * .5f) - ray.origin.z) * divZ;
    if (minz > maxz) {
        final float t = minz;
        minz = maxz;
        maxz = t;
    }
    float min = Math.max(Math.max(minx, miny), minz);
    float max = Math.min(Math.min(maxx, maxy), maxz);
    return max >= 0 && max >= min;
}
