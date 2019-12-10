/**
 * Computes a hull the same as {@link #computePolygon(float[], int, int, boolean)} but returns indices of the specified points.
 */
public IntArray computeIndices(float[] points, int offset, int count, boolean sorted, boolean yDown) {
    int end = offset + count;
    if (!sorted) {
        if (sortedPoints == null || sortedPoints.length < count)
            sortedPoints = new float[count];
        System.arraycopy(points, offset, sortedPoints, 0, count);
        points = sortedPoints;
        offset = 0;
        sortWithIndices(points, count, yDown);
    }
    IntArray indices = this.indices;
    indices.clear();
    FloatArray hull = this.hull;
    hull.clear();
    // Lower hull.
    for (int i = offset, index = i / 2; i < end; i += 2, index++) {
        float x = points[i];
        float y = points[i + 1];
        while (hull.size >= 4 && ccw(x, y) <= 0) {
            hull.size -= 2;
            indices.size--;
        }
        hull.add(x);
        hull.add(y);
        indices.add(index);
    }
    // Upper hull.
    for (int i = end - 4, index = i / 2, t = hull.size + 2; i >= offset; i -= 2, index--) {
        float x = points[i];
        float y = points[i + 1];
        while (hull.size >= t && ccw(x, y) <= 0) {
            hull.size -= 2;
            indices.size--;
        }
        hull.add(x);
        hull.add(y);
        indices.add(index);
    }
    // Convert sorted to unsorted indices.
    if (!sorted) {
        short[] originalIndicesArray = originalIndices.items;
        int[] indicesArray = indices.items;
        for (int i = 0, n = indices.size; i < n; i++) indicesArray[i] = originalIndicesArray[indicesArray[i]];
    }
    return indices;
}
