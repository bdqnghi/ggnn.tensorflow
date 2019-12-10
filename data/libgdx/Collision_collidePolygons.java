/**
 * Compute the collision manifold between two polygons.
 *
 * @param manifold
 * @param polygon1
 * @param xf1
 * @param polygon2
 * @param xf2
 */
public final void collidePolygons(Manifold manifold, final PolygonShape polyA, final Transform xfA, final PolygonShape polyB, final Transform xfB) {
    // Find edge normal of max separation on A - return if separating axis is found
    // Find edge normal of max separation on B - return if separation axis is found
    // Choose reference edge as min(minA, minB)
    // Find incident edge
    // Clip
    // The normal points from 1 to 2
    manifold.pointCount = 0;
    float totalRadius = polyA.m_radius + polyB.m_radius;
    findMaxSeparation(results1, polyA, xfA, polyB, xfB);
    if (results1.separation > totalRadius) {
        return;
    }
    findMaxSeparation(results2, polyB, xfB, polyA, xfA);
    if (results2.separation > totalRadius) {
        return;
    }
    // reference polygon
    final PolygonShape poly1;
    // incident polygon
    final PolygonShape poly2;
    Transform xf1, xf2;
    // reference edge
    int edge1;
    boolean flip;
    final float k_tol = 0.1f * Settings.linearSlop;
    if (results2.separation > results1.separation + k_tol) {
        poly1 = polyB;
        poly2 = polyA;
        xf1 = xfB;
        xf2 = xfA;
        edge1 = results2.edgeIndex;
        manifold.type = ManifoldType.FACE_B;
        flip = true;
    } else {
        poly1 = polyA;
        poly2 = polyB;
        xf1 = xfA;
        xf2 = xfB;
        edge1 = results1.edgeIndex;
        manifold.type = ManifoldType.FACE_A;
        flip = false;
    }
    final Rot xf1q = xf1.q;
    findIncidentEdge(incidentEdge, poly1, xf1, edge1, poly2, xf2);
    int count1 = poly1.m_count;
    final Vec2[] vertices1 = poly1.m_vertices;
    final int iv1 = edge1;
    final int iv2 = edge1 + 1 < count1 ? edge1 + 1 : 0;
    v11.set(vertices1[iv1]);
    v12.set(vertices1[iv2]);
    localTangent.x = v12.x - v11.x;
    localTangent.y = v12.y - v11.y;
    localTangent.normalize();
    // Vec2 localNormal = Vec2.cross(dv, 1.0f);
    localNormal.x = 1f * localTangent.y;
    localNormal.y = -1f * localTangent.x;
    // Vec2 planePoint = 0.5f * (v11+ v12);
    planePoint.x = (v11.x + v12.x) * .5f;
    planePoint.y = (v11.y + v12.y) * .5f;
    // Rot.mulToOutUnsafe(xf1.q, localTangent, tangent);
    tangent.x = xf1q.c * localTangent.x - xf1q.s * localTangent.y;
    tangent.y = xf1q.s * localTangent.x + xf1q.c * localTangent.y;
    // Vec2.crossToOutUnsafe(tangent, 1f, normal);
    final float normalx = 1f * tangent.y;
    final float normaly = -1f * tangent.x;
    Transform.mulToOut(xf1, v11, v11);
    Transform.mulToOut(xf1, v12, v12);
    // v11 = Mul(xf1, v11);
    // v12 = Mul(xf1, v12);
    // Face offset
    // float frontOffset = Vec2.dot(normal, v11);
    float frontOffset = normalx * v11.x + normaly * v11.y;
    // Side offsets, extended by polytope skin thickness.
    // float sideOffset1 = -Vec2.dot(tangent, v11) + totalRadius;
    // float sideOffset2 = Vec2.dot(tangent, v12) + totalRadius;
    float sideOffset1 = -(tangent.x * v11.x + tangent.y * v11.y) + totalRadius;
    float sideOffset2 = tangent.x * v12.x + tangent.y * v12.y + totalRadius;
    // Clip incident edge against extruded edge1 side edges.
    // ClipVertex clipPoints1[2];
    // ClipVertex clipPoints2[2];
    int np;
    // Clip to box side 1
    // np = ClipSegmentToLine(clipPoints1, incidentEdge, -sideNormal, sideOffset1);
    tangent.negateLocal();
    np = clipSegmentToLine(clipPoints1, incidentEdge, tangent, sideOffset1, iv1);
    tangent.negateLocal();
    if (np < 2) {
        return;
    }
    // Clip to negative box side 1
    np = clipSegmentToLine(clipPoints2, clipPoints1, tangent, sideOffset2, iv2);
    if (np < 2) {
        return;
    }
    // Now clipPoints2 contains the clipped points.
    manifold.localNormal.set(localNormal);
    manifold.localPoint.set(planePoint);
    int pointCount = 0;
    for (int i = 0; i < Settings.maxManifoldPoints; ++i) {
        // float separation = Vec2.dot(normal, clipPoints2[i].v) - frontOffset;
        float separation = normalx * clipPoints2[i].v.x + normaly * clipPoints2[i].v.y - frontOffset;
        if (separation <= totalRadius) {
            ManifoldPoint cp = manifold.points[pointCount];
            // cp.m_localPoint = MulT(xf2, clipPoints2[i].v);
            Vec2 out = cp.localPoint;
            final float px = clipPoints2[i].v.x - xf2.p.x;
            final float py = clipPoints2[i].v.y - xf2.p.y;
            out.x = (xf2.q.c * px + xf2.q.s * py);
            out.y = (-xf2.q.s * px + xf2.q.c * py);
            cp.id.set(clipPoints2[i].id);
            if (flip) {
                // Swap features
                cp.id.flip();
            }
            ++pointCount;
        }
    }
    manifold.pointCount = pointCount;
}
