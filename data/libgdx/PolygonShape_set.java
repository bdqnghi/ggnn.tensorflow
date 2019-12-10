/**
 * Create a convex hull from the given array of points. The count must be in the range [3,
 * Settings.maxPolygonVertices]. This method takes an arraypool for pooling.
 *
 * @warning the points may be re-ordered, even if they form a convex polygon.
 * @warning collinear points are removed.
 */
public final void set(final Vec2[] verts, final int num, final Vec2Array vecPool, final IntArray intPool) {
    assert (3 <= num && num <= Settings.maxPolygonVertices);
    if (num < 3) {
        setAsBox(1.0f, 1.0f);
        return;
    }
    int n = MathUtils.min(num, Settings.maxPolygonVertices);
    // Perform welding and copy vertices into local buffer.
    Vec2[] ps = (vecPool != null) ? vecPool.get(Settings.maxPolygonVertices) : new Vec2[Settings.maxPolygonVertices];
    int tempCount = 0;
    for (int i = 0; i < n; ++i) {
        Vec2 v = verts[i];
        boolean unique = true;
        for (int j = 0; j < tempCount; ++j) {
            if (MathUtils.distanceSquared(v, ps[j]) < 0.5f * Settings.linearSlop) {
                unique = false;
                break;
            }
        }
        if (unique) {
            ps[tempCount++] = v;
        }
    }
    n = tempCount;
    if (n < 3) {
        // Polygon is degenerate.
        assert (false);
        setAsBox(1.0f, 1.0f);
        return;
    }
    // Create the convex hull using the Gift wrapping algorithm
    // http://en.wikipedia.org/wiki/Gift_wrapping_algorithm
    // Find the right most point on the hull
    int i0 = 0;
    float x0 = ps[0].x;
    for (int i = 1; i < n; ++i) {
        float x = ps[i].x;
        if (x > x0 || (x == x0 && ps[i].y < ps[i0].y)) {
            i0 = i;
            x0 = x;
        }
    }
    int[] hull = (intPool != null) ? intPool.get(Settings.maxPolygonVertices) : new int[Settings.maxPolygonVertices];
    int m = 0;
    int ih = i0;
    while (true) {
        hull[m] = ih;
        int ie = 0;
        for (int j = 1; j < n; ++j) {
            if (ie == ih) {
                ie = j;
                continue;
            }
            Vec2 r = pool1.set(ps[ie]).subLocal(ps[hull[m]]);
            Vec2 v = pool2.set(ps[j]).subLocal(ps[hull[m]]);
            float c = Vec2.cross(r, v);
            if (c < 0.0f) {
                ie = j;
            }
            // Collinearity check
            if (c == 0.0f && v.lengthSquared() > r.lengthSquared()) {
                ie = j;
            }
        }
        ++m;
        ih = ie;
        if (ie == i0) {
            break;
        }
    }
    this.m_count = m;
    // Copy vertices.
    for (int i = 0; i < m_count; ++i) {
        if (m_vertices[i] == null) {
            m_vertices[i] = new Vec2();
        }
        m_vertices[i].set(ps[hull[i]]);
    }
    final Vec2 edge = pool1;
    // Compute normals. Ensure the edges have non-zero length.
    for (int i = 0; i < m_count; ++i) {
        final int i1 = i;
        final int i2 = i + 1 < m_count ? i + 1 : 0;
        edge.set(m_vertices[i2]).subLocal(m_vertices[i1]);
        assert (edge.lengthSquared() > Settings.EPSILON * Settings.EPSILON);
        Vec2.crossToOutUnsafe(edge, 1f, m_normals[i]);
        m_normals[i].normalize();
    }
    // Compute the polygon centroid.
    computeCentroidToOut(m_vertices, m_count, m_centroid);
}
