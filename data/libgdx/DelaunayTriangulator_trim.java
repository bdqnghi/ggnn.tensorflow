/**
 * Removes all triangles with a centroid outside the specified hull, which may be concave. Note some triangulations may have
 * triangles whose centroid is inside the hull but a portion is outside.
 */
public void trim(ShortArray triangles, float[] points, float[] hull, int offset, int count) {
    short[] trianglesArray = triangles.items;
    for (int i = triangles.size - 1; i >= 0; i -= 3) {
        int p1 = trianglesArray[i - 2] * 2;
        int p2 = trianglesArray[i - 1] * 2;
        int p3 = trianglesArray[i] * 2;
        GeometryUtils.triangleCentroid(points[p1], points[p1 + 1], points[p2], points[p2 + 1], points[p3], points[p3 + 1], centroid);
        if (!Intersector.isPointInPolygon(hull, offset, count, centroid.x, centroid.y)) {
            triangles.removeIndex(i);
            triangles.removeIndex(i - 1);
            triangles.removeIndex(i - 2);
        }
    }
}
