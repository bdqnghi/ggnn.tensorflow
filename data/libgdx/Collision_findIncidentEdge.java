public final void findIncidentEdge(final ClipVertex[] c, final PolygonShape poly1, final Transform xf1, int edge1, final PolygonShape poly2, final Transform xf2) {
    int count1 = poly1.m_count;
    final Vec2[] normals1 = poly1.m_normals;
    int count2 = poly2.m_count;
    final Vec2[] vertices2 = poly2.m_vertices;
    final Vec2[] normals2 = poly2.m_normals;
    assert (0 <= edge1 && edge1 < count1);
    final ClipVertex c0 = c[0];
    final ClipVertex c1 = c[1];
    final Rot xf1q = xf1.q;
    final Rot xf2q = xf2.q;
    // Get the normal of the reference edge in poly2's frame.
    // Vec2 normal1 = MulT(xf2.R, Mul(xf1.R, normals1[edge1]));
    // before inline:
    // Rot.mulToOutUnsafe(xf1.q, normals1[edge1], normal1); // temporary
    // Rot.mulTrans(xf2.q, normal1, normal1);
    // after inline:
    final Vec2 v = normals1[edge1];
    final float tempx = xf1q.c * v.x - xf1q.s * v.y;
    final float tempy = xf1q.s * v.x + xf1q.c * v.y;
    final float normal1x = xf2q.c * tempx + xf2q.s * tempy;
    final float normal1y = -xf2q.s * tempx + xf2q.c * tempy;
    // end inline
    // Find the incident edge on poly2.
    int index = 0;
    float minDot = Float.MAX_VALUE;
    for (int i = 0; i < count2; ++i) {
        Vec2 b = normals2[i];
        float dot = normal1x * b.x + normal1y * b.y;
        if (dot < minDot) {
            minDot = dot;
            index = i;
        }
    }
    // Build the clip vertices for the incident edge.
    int i1 = index;
    int i2 = i1 + 1 < count2 ? i1 + 1 : 0;
    // c0.v = Mul(xf2, vertices2[i1]);
    Vec2 v1 = vertices2[i1];
    Vec2 out = c0.v;
    out.x = (xf2q.c * v1.x - xf2q.s * v1.y) + xf2.p.x;
    out.y = (xf2q.s * v1.x + xf2q.c * v1.y) + xf2.p.y;
    c0.id.indexA = (byte) edge1;
    c0.id.indexB = (byte) i1;
    c0.id.typeA = (byte) ContactID.Type.FACE.ordinal();
    c0.id.typeB = (byte) ContactID.Type.VERTEX.ordinal();
    // c1.v = Mul(xf2, vertices2[i2]);
    Vec2 v2 = vertices2[i2];
    Vec2 out1 = c1.v;
    out1.x = (xf2q.c * v2.x - xf2q.s * v2.y) + xf2.p.x;
    out1.y = (xf2q.s * v2.x + xf2q.c * v2.y) + xf2.p.y;
    c1.id.indexA = (byte) edge1;
    c1.id.indexB = (byte) i2;
    c1.id.typeA = (byte) ContactID.Type.FACE.ordinal();
    c1.id.typeB = (byte) ContactID.Type.VERTEX.ordinal();
}
