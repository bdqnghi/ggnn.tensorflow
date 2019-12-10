@Override
public void computeAABB(AABB aabb, Transform xf, int childIndex) {
    assert (childIndex < m_count);
    final Vec2 lower = aabb.lowerBound;
    final Vec2 upper = aabb.upperBound;
    int i1 = childIndex;
    int i2 = childIndex + 1;
    if (i2 == m_count) {
        i2 = 0;
    }
    final Vec2 vi1 = m_vertices[i1];
    final Vec2 vi2 = m_vertices[i2];
    final Rot xfq = xf.q;
    final Vec2 xfp = xf.p;
    float v1x = (xfq.c * vi1.x - xfq.s * vi1.y) + xfp.x;
    float v1y = (xfq.s * vi1.x + xfq.c * vi1.y) + xfp.y;
    float v2x = (xfq.c * vi2.x - xfq.s * vi2.y) + xfp.x;
    float v2y = (xfq.s * vi2.x + xfq.c * vi2.y) + xfp.y;
    lower.x = v1x < v2x ? v1x : v2x;
    lower.y = v1y < v2y ? v1y : v2y;
    upper.x = v1x > v2x ? v1x : v2x;
    upper.y = v1y > v2y ? v1y : v2y;
}
