// djm pooling, and from above
/**
 * Compute the collision manifold between a polygon and a circle.
 *
 * @param manifold
 * @param polygon
 * @param xfA
 * @param circle
 * @param xfB
 */
public final void collidePolygonAndCircle(Manifold manifold, final PolygonShape polygon, final Transform xfA, final CircleShape circle, final Transform xfB) {
    manifold.pointCount = 0;
    // Vec2 v = circle.m_p;
    // Compute circle position in the frame of the polygon.
    // before inline:
    // Transform.mulToOutUnsafe(xfB, circle.m_p, c);
    // Transform.mulTransToOut(xfA, c, cLocal);
    // final float cLocalx = cLocal.x;
    // final float cLocaly = cLocal.y;
    // after inline:
    final Vec2 circlep = circle.m_p;
    final Rot xfBq = xfB.q;
    final Rot xfAq = xfA.q;
    final float cx = (xfBq.c * circlep.x - xfBq.s * circlep.y) + xfB.p.x;
    final float cy = (xfBq.s * circlep.x + xfBq.c * circlep.y) + xfB.p.y;
    final float px = cx - xfA.p.x;
    final float py = cy - xfA.p.y;
    final float cLocalx = (xfAq.c * px + xfAq.s * py);
    final float cLocaly = (-xfAq.s * px + xfAq.c * py);
    // end inline
    // Find the min separating edge.
    int normalIndex = 0;
    float separation = -Float.MAX_VALUE;
    final float radius = polygon.m_radius + circle.m_radius;
    final int vertexCount = polygon.m_count;
    float s;
    final Vec2[] vertices = polygon.m_vertices;
    final Vec2[] normals = polygon.m_normals;
    for (int i = 0; i < vertexCount; i++) {
        // before inline
        // temp.set(cLocal).subLocal(vertices[i]);
        // float s = Vec2.dot(normals[i], temp);
        // after inline
        final Vec2 vertex = vertices[i];
        final float tempx = cLocalx - vertex.x;
        final float tempy = cLocaly - vertex.y;
        s = normals[i].x * tempx + normals[i].y * tempy;
        if (s > radius) {
            // early out
            return;
        }
        if (s > separation) {
            separation = s;
            normalIndex = i;
        }
    }
    // Vertices that subtend the incident face.
    final int vertIndex1 = normalIndex;
    final int vertIndex2 = vertIndex1 + 1 < vertexCount ? vertIndex1 + 1 : 0;
    final Vec2 v1 = vertices[vertIndex1];
    final Vec2 v2 = vertices[vertIndex2];
    // If the center is inside the polygon ...
    if (separation < Settings.EPSILON) {
        manifold.pointCount = 1;
        manifold.type = ManifoldType.FACE_A;
        // before inline:
        // manifold.localNormal.set(normals[normalIndex]);
        // manifold.localPoint.set(v1).addLocal(v2).mulLocal(.5f);
        // manifold.points[0].localPoint.set(circle.m_p);
        // after inline:
        final Vec2 normal = normals[normalIndex];
        manifold.localNormal.x = normal.x;
        manifold.localNormal.y = normal.y;
        manifold.localPoint.x = (v1.x + v2.x) * .5f;
        manifold.localPoint.y = (v1.y + v2.y) * .5f;
        final ManifoldPoint mpoint = manifold.points[0];
        mpoint.localPoint.x = circlep.x;
        mpoint.localPoint.y = circlep.y;
        mpoint.id.zero();
        return;
    }
    // Compute barycentric coordinates
    // before inline:
    // temp.set(cLocal).subLocal(v1);
    // temp2.set(v2).subLocal(v1);
    // float u1 = Vec2.dot(temp, temp2);
    // temp.set(cLocal).subLocal(v2);
    // temp2.set(v1).subLocal(v2);
    // float u2 = Vec2.dot(temp, temp2);
    // after inline:
    final float tempX = cLocalx - v1.x;
    final float tempY = cLocaly - v1.y;
    final float temp2X = v2.x - v1.x;
    final float temp2Y = v2.y - v1.y;
    final float u1 = tempX * temp2X + tempY * temp2Y;
    final float temp3X = cLocalx - v2.x;
    final float temp3Y = cLocaly - v2.y;
    final float temp4X = v1.x - v2.x;
    final float temp4Y = v1.y - v2.y;
    final float u2 = temp3X * temp4X + temp3Y * temp4Y;
    if (u1 <= 0f) {
        // inlined
        final float dx = cLocalx - v1.x;
        final float dy = cLocaly - v1.y;
        if (dx * dx + dy * dy > radius * radius) {
            return;
        }
        manifold.pointCount = 1;
        manifold.type = ManifoldType.FACE_A;
        // before inline:
        // manifold.localNormal.set(cLocal).subLocal(v1);
        // after inline:
        manifold.localNormal.x = cLocalx - v1.x;
        manifold.localNormal.y = cLocaly - v1.y;
        // end inline
        manifold.localNormal.normalize();
        manifold.localPoint.set(v1);
        manifold.points[0].localPoint.set(circlep);
        manifold.points[0].id.zero();
    } else if (u2 <= 0.0f) {
        // inlined
        final float dx = cLocalx - v2.x;
        final float dy = cLocaly - v2.y;
        if (dx * dx + dy * dy > radius * radius) {
            return;
        }
        manifold.pointCount = 1;
        manifold.type = ManifoldType.FACE_A;
        // before inline:
        // manifold.localNormal.set(cLocal).subLocal(v2);
        // after inline:
        manifold.localNormal.x = cLocalx - v2.x;
        manifold.localNormal.y = cLocaly - v2.y;
        // end inline
        manifold.localNormal.normalize();
        manifold.localPoint.set(v2);
        manifold.points[0].localPoint.set(circlep);
        manifold.points[0].id.zero();
    } else {
        // Vec2 faceCenter = 0.5f * (v1 + v2);
        // (temp is faceCenter)
        // before inline:
        // temp.set(v1).addLocal(v2).mulLocal(.5f);
        // 
        // temp2.set(cLocal).subLocal(temp);
        // separation = Vec2.dot(temp2, normals[vertIndex1]);
        // if (separation > radius) {
        // return;
        // }
        // after inline:
        final float fcx = (v1.x + v2.x) * .5f;
        final float fcy = (v1.y + v2.y) * .5f;
        final float tx = cLocalx - fcx;
        final float ty = cLocaly - fcy;
        final Vec2 normal = normals[vertIndex1];
        separation = tx * normal.x + ty * normal.y;
        if (separation > radius) {
            return;
        }
        // end inline
        manifold.pointCount = 1;
        manifold.type = ManifoldType.FACE_A;
        manifold.localNormal.set(normals[vertIndex1]);
        // (faceCenter)
        manifold.localPoint.x = fcx;
        manifold.localPoint.y = fcy;
        manifold.points[0].localPoint.set(circlep);
        manifold.points[0].id.zero();
    }
}
