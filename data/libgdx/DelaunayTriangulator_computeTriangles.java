/**
 * Triangulates the given point cloud to a list of triangle indices that make up the Delaunay triangulation.
 * @param points x,y pairs describing points. Duplicate points will result in undefined behavior.
 * @param sorted If false, the points will be sorted by the x coordinate, which is required by the triangulation algorithm. If
 *           sorting is done the input array is not modified, the returned indices are for the input array, and count*2
 *           additional working memory is needed.
 * @return triples of indices into the points that describe the triangles in clockwise order. Note the returned array is reused
 *         for later calls to the same method.
 */
public ShortArray computeTriangles(float[] points, int offset, int count, boolean sorted) {
    ShortArray triangles = this.triangles;
    triangles.clear();
    if (count < 6)
        return triangles;
    triangles.ensureCapacity(count);
    if (!sorted) {
        if (sortedPoints == null || sortedPoints.length < count)
            sortedPoints = new float[count];
        System.arraycopy(points, offset, sortedPoints, 0, count);
        points = sortedPoints;
        offset = 0;
        sort(points, count);
    }
    int end = offset + count;
    // Determine bounds for super triangle.
    float xmin = points[0], ymin = points[1];
    float xmax = xmin, ymax = ymin;
    for (int i = offset + 2; i < end; i++) {
        float value = points[i];
        if (value < xmin)
            xmin = value;
        if (value > xmax)
            xmax = value;
        i++;
        value = points[i];
        if (value < ymin)
            ymin = value;
        if (value > ymax)
            ymax = value;
    }
    float dx = xmax - xmin, dy = ymax - ymin;
    float dmax = (dx > dy ? dx : dy) * 20f;
    float xmid = (xmax + xmin) / 2f, ymid = (ymax + ymin) / 2f;
    // Setup the super triangle, which contains all points.
    float[] superTriangle = this.superTriangle;
    superTriangle[0] = xmid - dmax;
    superTriangle[1] = ymid - dmax;
    superTriangle[2] = xmid;
    superTriangle[3] = ymid + dmax;
    superTriangle[4] = xmid + dmax;
    superTriangle[5] = ymid - dmax;
    IntArray edges = this.edges;
    edges.ensureCapacity(count / 2);
    BooleanArray complete = this.complete;
    complete.clear();
    complete.ensureCapacity(count);
    // Add super triangle.
    triangles.add(end);
    triangles.add(end + 2);
    triangles.add(end + 4);
    complete.add(false);
    // Include each point one at a time into the existing mesh.
    for (int pointIndex = offset; pointIndex < end; pointIndex += 2) {
        float x = points[pointIndex], y = points[pointIndex + 1];
        // If x,y lies inside the circumcircle of a triangle, the edges are stored and the triangle removed.
        short[] trianglesArray = triangles.items;
        boolean[] completeArray = complete.items;
        for (int triangleIndex = triangles.size - 1; triangleIndex >= 0; triangleIndex -= 3) {
            int completeIndex = triangleIndex / 3;
            if (completeArray[completeIndex])
                continue;
            int p1 = trianglesArray[triangleIndex - 2];
            int p2 = trianglesArray[triangleIndex - 1];
            int p3 = trianglesArray[triangleIndex];
            float x1, y1, x2, y2, x3, y3;
            if (p1 >= end) {
                int i = p1 - end;
                x1 = superTriangle[i];
                y1 = superTriangle[i + 1];
            } else {
                x1 = points[p1];
                y1 = points[p1 + 1];
            }
            if (p2 >= end) {
                int i = p2 - end;
                x2 = superTriangle[i];
                y2 = superTriangle[i + 1];
            } else {
                x2 = points[p2];
                y2 = points[p2 + 1];
            }
            if (p3 >= end) {
                int i = p3 - end;
                x3 = superTriangle[i];
                y3 = superTriangle[i + 1];
            } else {
                x3 = points[p3];
                y3 = points[p3 + 1];
            }
            switch(circumCircle(x, y, x1, y1, x2, y2, x3, y3)) {
                case COMPLETE:
                    completeArray[completeIndex] = true;
                    break;
                case INSIDE:
                    edges.add(p1);
                    edges.add(p2);
                    edges.add(p2);
                    edges.add(p3);
                    edges.add(p3);
                    edges.add(p1);
                    triangles.removeIndex(triangleIndex);
                    triangles.removeIndex(triangleIndex - 1);
                    triangles.removeIndex(triangleIndex - 2);
                    complete.removeIndex(completeIndex);
                    break;
            }
        }
        int[] edgesArray = edges.items;
        for (int i = 0, n = edges.size; i < n; i += 2) {
            // Skip multiple edges. If all triangles are anticlockwise then all interior edges are opposite pointing in direction.
            int p1 = edgesArray[i];
            if (p1 == -1)
                continue;
            int p2 = edgesArray[i + 1];
            boolean skip = false;
            for (int ii = i + 2; ii < n; ii += 2) {
                if (p1 == edgesArray[ii + 1] && p2 == edgesArray[ii]) {
                    skip = true;
                    edgesArray[ii] = -1;
                }
            }
            if (skip)
                continue;
            // Form new triangles for the current point. Edges are arranged in clockwise order.
            triangles.add(p1);
            triangles.add(edgesArray[i + 1]);
            triangles.add(pointIndex);
            complete.add(false);
        }
        edges.clear();
    }
    // Remove triangles with super triangle vertices.
    short[] trianglesArray = triangles.items;
    for (int i = triangles.size - 1; i >= 0; i -= 3) {
        if (trianglesArray[i] >= end || trianglesArray[i - 1] >= end || trianglesArray[i - 2] >= end) {
            triangles.removeIndex(i);
            triangles.removeIndex(i - 1);
            triangles.removeIndex(i - 2);
        }
    }
    // Convert sorted to unsorted indices.
    if (!sorted) {
        short[] originalIndicesArray = originalIndices.items;
        for (int i = 0, n = triangles.size; i < n; i++) trianglesArray[i] = (short) (originalIndicesArray[trianglesArray[i] / 2] * 2);
    }
    // Adjust triangles to start from zero and count by 1, not by vertex x,y coordinate pairs.
    if (offset == 0) {
        for (int i = 0, n = triangles.size; i < n; i++) trianglesArray[i] = (short) (trianglesArray[i] / 2);
    } else {
        for (int i = 0, n = triangles.size; i < n; i++) trianglesArray[i] = (short) ((trianglesArray[i] - offset) / 2);
    }
    return triangles;
}
