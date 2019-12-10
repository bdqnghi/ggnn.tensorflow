/**
 * Splits the triangle by the plane. The result is stored in the SplitTriangle instance. Depending on where the triangle is
 * relative to the plane, the result can be:
 *
 * <ul>
 * <li>Triangle is fully in front/behind: {@link SplitTriangle#front} or {@link SplitTriangle#back} will contain the original
 * triangle, {@link SplitTriangle#total} will be one.</li>
 * <li>Triangle has two vertices in front, one behind: {@link SplitTriangle#front} contains 2 triangles,
 * {@link SplitTriangle#back} contains 1 triangles, {@link SplitTriangle#total} will be 3.</li>
 * <li>Triangle has one vertex in front, two behind: {@link SplitTriangle#front} contains 1 triangle,
 * {@link SplitTriangle#back} contains 2 triangles, {@link SplitTriangle#total} will be 3.</li>
 * </ul>
 *
 * The input triangle should have the form: x, y, z, x2, y2, z2, x3, y3, z3. One can add additional attributes per vertex which
 * will be interpolated if split, such as texture coordinates or normals. Note that these additional attributes won't be
 * normalized, as might be necessary in case of normals.
 *
 * @param triangle
 * @param plane
 * @param split output SplitTriangle
 */
public static void splitTriangle(float[] triangle, Plane plane, SplitTriangle split) {
    int stride = triangle.length / 3;
    boolean r1 = plane.testPoint(triangle[0], triangle[1], triangle[2]) == PlaneSide.Back;
    boolean r2 = plane.testPoint(triangle[0 + stride], triangle[1 + stride], triangle[2 + stride]) == PlaneSide.Back;
    boolean r3 = plane.testPoint(triangle[0 + stride * 2], triangle[1 + stride * 2], triangle[2 + stride * 2]) == PlaneSide.Back;
    split.reset();
    // easy case, triangle is on one side (point on plane means front).
    if (r1 == r2 && r2 == r3) {
        split.total = 1;
        if (r1) {
            split.numBack = 1;
            System.arraycopy(triangle, 0, split.back, 0, triangle.length);
        } else {
            split.numFront = 1;
            System.arraycopy(triangle, 0, split.front, 0, triangle.length);
        }
        return;
    }
    // set number of triangles
    split.total = 3;
    split.numFront = (r1 ? 0 : 1) + (r2 ? 0 : 1) + (r3 ? 0 : 1);
    split.numBack = split.total - split.numFront;
    // hard case, split the three edges on the plane
    // determine which array to fill first, front or back, flip if we
    // cross the plane
    split.setSide(!r1);
    // split first edge
    int first = 0;
    int second = stride;
    if (r1 != r2) {
        // split the edge
        splitEdge(triangle, first, second, stride, plane, split.edgeSplit, 0);
        // add first edge vertex and new vertex to current side
        split.add(triangle, first, stride);
        split.add(split.edgeSplit, 0, stride);
        // flip side and add new vertex and second edge vertex to current side
        split.setSide(!split.getSide());
        split.add(split.edgeSplit, 0, stride);
    } else {
        // add both vertices
        split.add(triangle, first, stride);
    }
    // split second edge
    first = stride;
    second = stride + stride;
    if (r2 != r3) {
        // split the edge
        splitEdge(triangle, first, second, stride, plane, split.edgeSplit, 0);
        // add first edge vertex and new vertex to current side
        split.add(triangle, first, stride);
        split.add(split.edgeSplit, 0, stride);
        // flip side and add new vertex and second edge vertex to current side
        split.setSide(!split.getSide());
        split.add(split.edgeSplit, 0, stride);
    } else {
        // add both vertices
        split.add(triangle, first, stride);
    }
    // split third edge
    first = stride + stride;
    second = 0;
    if (r3 != r1) {
        // split the edge
        splitEdge(triangle, first, second, stride, plane, split.edgeSplit, 0);
        // add first edge vertex and new vertex to current side
        split.add(triangle, first, stride);
        split.add(split.edgeSplit, 0, stride);
        // flip side and add new vertex and second edge vertex to current side
        split.setSide(!split.getSide());
        split.add(split.edgeSplit, 0, stride);
    } else {
        // add both vertices
        split.add(triangle, first, stride);
    }
    // triangulate the side with 2 triangles
    if (split.numFront == 2) {
        System.arraycopy(split.front, stride * 2, split.front, stride * 3, stride * 2);
        System.arraycopy(split.front, 0, split.front, stride * 5, stride);
    } else {
        System.arraycopy(split.back, stride * 2, split.back, stride * 3, stride * 2);
        System.arraycopy(split.back, 0, split.back, stride * 5, stride);
    }
}
