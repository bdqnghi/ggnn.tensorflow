/**
 * Clipping for contact manifolds. Sutherland-Hodgman clipping.
 *
 * @param vOut
 * @param vIn
 * @param normal
 * @param offset
 * @return
 */
public static final int clipSegmentToLine(final ClipVertex[] vOut, final ClipVertex[] vIn, final Vec2 normal, float offset, int vertexIndexA) {
    // Start with no output points
    int numOut = 0;
    final ClipVertex vIn0 = vIn[0];
    final ClipVertex vIn1 = vIn[1];
    final Vec2 vIn0v = vIn0.v;
    final Vec2 vIn1v = vIn1.v;
    // Calculate the distance of end points to the line
    float distance0 = Vec2.dot(normal, vIn0v) - offset;
    float distance1 = Vec2.dot(normal, vIn1v) - offset;
    // If the points are behind the plane
    if (distance0 <= 0.0f) {
        vOut[numOut++].set(vIn0);
    }
    if (distance1 <= 0.0f) {
        vOut[numOut++].set(vIn1);
    }
    // If the points are on different sides of the plane
    if (distance0 * distance1 < 0.0f) {
        // Find intersection point of edge and plane
        float interp = distance0 / (distance0 - distance1);
        ClipVertex vOutNO = vOut[numOut];
        // vOut[numOut].v = vIn[0].v + interp * (vIn[1].v - vIn[0].v);
        vOutNO.v.x = vIn0v.x + interp * (vIn1v.x - vIn0v.x);
        vOutNO.v.y = vIn0v.y + interp * (vIn1v.y - vIn0v.y);
        // VertexA is hitting edgeB.
        vOutNO.id.indexA = (byte) vertexIndexA;
        vOutNO.id.indexB = vIn0.id.indexB;
        vOutNO.id.typeA = (byte) ContactID.Type.VERTEX.ordinal();
        vOutNO.id.typeB = (byte) ContactID.Type.FACE.ordinal();
        ++numOut;
    }
    return numOut;
}
