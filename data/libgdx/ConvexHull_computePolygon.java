/**
 * Returns a list of points on the convex hull in counter-clockwise order. Note: the last point in the returned list is the
 * same as the first one.
 */
/**
 * Returns the convex hull polygon for the given point cloud.
 * @param points x,y pairs describing points. Duplicate points will result in undefined behavior.
 * @param sorted If false, the points will be sorted by the x coordinate then the y coordinate, which is required by the convex
 *           hull algorithm. If sorting is done the input array is not modified and count additional working memory is needed.
 * @return pairs of coordinates that describe the convex hull polygon in counterclockwise order. Note the returned array is
 *         reused for later calls to the same method.
 */
public FloatArray computePolygon(float[] points, int offset, int count, boolean sorted) {
    int end = offset + count;
    if (!sorted) {
        if (sortedPoints == null || sortedPoints.length < count)
            sortedPoints = new float[count];
        System.arraycopy(points, offset, sortedPoints, 0, count);
        points = sortedPoints;
        offset = 0;
        sort(points, count);
    }
    FloatArray hull = this.hull;
    hull.clear();
    // Lower hull.
    for (int i = offset; i < end; i += 2) {
        float x = points[i];
        float y = points[i + 1];
        while (hull.size >= 4 && ccw(x, y) <= 0) hull.size -= 2;
        hull.add(x);
        hull.add(y);
    }
    // Upper hull.
    for (int i = end - 4, t = hull.size + 2; i >= offset; i -= 2) {
        float x = points[i];
        float y = points[i + 1];
        while (hull.size >= t && ccw(x, y) <= 0) hull.size -= 2;
        hull.add(x);
        hull.add(y);
    }
    return hull;
}
