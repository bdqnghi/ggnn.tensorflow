/**
 * Compute the closest points between two shapes. Supports any combination of: CircleShape and
 * PolygonShape. The simplex cache is input/output. On the first call set SimplexCache.count to
 * zero.
 *
 * @param output
 * @param cache
 * @param input
 */
public final void distance(final DistanceOutput output, final SimplexCache cache, final DistanceInput input) {
    GJK_CALLS++;
    final DistanceProxy proxyA = input.proxyA;
    final DistanceProxy proxyB = input.proxyB;
    Transform transformA = input.transformA;
    Transform transformB = input.transformB;
    // Initialize the simplex.
    simplex.readCache(cache, proxyA, transformA, proxyB, transformB);
    // Get simplex vertices as an array.
    SimplexVertex[] vertices = simplex.vertices;
    // These store the vertices of the last simplex so that we
    // can check for duplicates and prevent cycling.
    // (pooled above)
    int saveCount = 0;
    simplex.getClosestPoint(closestPoint);
    float distanceSqr1 = closestPoint.lengthSquared();
    float distanceSqr2 = distanceSqr1;
    // Main iteration loop
    int iter = 0;
    while (iter < MAX_ITERS) {
        // Copy simplex so we can identify duplicates.
        saveCount = simplex.m_count;
        for (int i = 0; i < saveCount; i++) {
            saveA[i] = vertices[i].indexA;
            saveB[i] = vertices[i].indexB;
        }
        switch(simplex.m_count) {
            case 1:
                break;
            case 2:
                simplex.solve2();
                break;
            case 3:
                simplex.solve3();
                break;
            default:
                assert (false);
        }
        // If we have 3 points, then the origin is in the corresponding triangle.
        if (simplex.m_count == 3) {
            break;
        }
        // Compute closest point.
        simplex.getClosestPoint(closestPoint);
        distanceSqr2 = closestPoint.lengthSquared();
        // ensure progress
        if (distanceSqr2 >= distanceSqr1) {
        // break;
        }
        distanceSqr1 = distanceSqr2;
        // get search direction;
        simplex.getSearchDirection(d);
        // Ensure the search direction is numerically fit.
        if (d.lengthSquared() < Settings.EPSILON * Settings.EPSILON) {
            // to determine if the origin is contained in the CSO or very close to it.
            break;
        }
        /*
       * SimplexVertex* vertex = vertices + simplex.m_count; vertex.indexA =
       * proxyA.GetSupport(MulT(transformA.R, -d)); vertex.wA = Mul(transformA,
       * proxyA.GetVertex(vertex.indexA)); Vec2 wBLocal; vertex.indexB =
       * proxyB.GetSupport(MulT(transformB.R, d)); vertex.wB = Mul(transformB,
       * proxyB.GetVertex(vertex.indexB)); vertex.w = vertex.wB - vertex.wA;
       */
        // Compute a tentative new simplex vertex using support points.
        SimplexVertex vertex = vertices[simplex.m_count];
        Rot.mulTransUnsafe(transformA.q, d.negateLocal(), temp);
        vertex.indexA = proxyA.getSupport(temp);
        Transform.mulToOutUnsafe(transformA, proxyA.getVertex(vertex.indexA), vertex.wA);
        // Vec2 wBLocal;
        Rot.mulTransUnsafe(transformB.q, d.negateLocal(), temp);
        vertex.indexB = proxyB.getSupport(temp);
        Transform.mulToOutUnsafe(transformB, proxyB.getVertex(vertex.indexB), vertex.wB);
        vertex.w.set(vertex.wB).subLocal(vertex.wA);
        // Iteration count is equated to the number of support point calls.
        ++iter;
        ++GJK_ITERS;
        // Check for duplicate support points. This is the main termination criteria.
        boolean duplicate = false;
        for (int i = 0; i < saveCount; ++i) {
            if (vertex.indexA == saveA[i] && vertex.indexB == saveB[i]) {
                duplicate = true;
                break;
            }
        }
        // If we found a duplicate support point we must exit to avoid cycling.
        if (duplicate) {
            break;
        }
        // New vertex is ok and needed.
        ++simplex.m_count;
    }
    GJK_MAX_ITERS = MathUtils.max(GJK_MAX_ITERS, iter);
    // Prepare output.
    simplex.getWitnessPoints(output.pointA, output.pointB);
    output.distance = MathUtils.distance(output.pointA, output.pointB);
    output.iterations = iter;
    // Cache the simplex.
    simplex.writeCache(cache);
    // Apply radii if requested.
    if (input.useRadii) {
        float rA = proxyA.m_radius;
        float rB = proxyB.m_radius;
        if (output.distance > rA + rB && output.distance > Settings.EPSILON) {
            // Shapes are still no overlapped.
            // Move the witness points to the outer surface.
            output.distance -= rA + rB;
            normal.set(output.pointB).subLocal(output.pointA);
            normal.normalize();
            temp.set(normal).mulLocal(rA);
            output.pointA.addLocal(temp);
            temp.set(normal).mulLocal(rB);
            output.pointB.subLocal(temp);
        } else {
            // Shapes are overlapped when radii are considered.
            // Move the witness points to the middle.
            // Vec2 p = 0.5f * (output.pointA + output.pointB);
            output.pointA.addLocal(output.pointB).mulLocal(.5f);
            output.pointB.set(output.pointA);
            output.distance = 0.0f;
        }
    }
}
