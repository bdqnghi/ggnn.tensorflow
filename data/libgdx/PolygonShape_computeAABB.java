@Override
public final void computeAABB(final AABB aabb, final Transform xf, int childIndex) {
    final Vec2 lower = aabb.lowerBound;
    final Vec2 upper = aabb.upperBound;
    final Vec2 v1 = m_vertices[0];
    final float xfqc = xf.q.c;
    final float xfqs = xf.q.s;
    final float xfpx = xf.p.x;
    final float xfpy = xf.p.y;
    lower.x = (xfqc * v1.x - xfqs * v1.y) + xfpx;
    lower.y = (xfqs * v1.x + xfqc * v1.y) + xfpy;
    upper.x = lower.x;
    upper.y = lower.y;
    for (int i = 1; i < m_count; ++i) {
        Vec2 v2 = m_vertices[i];
        // Vec2 v = Mul(xf, m_vertices[i]);
        float vx = (xfqc * v2.x - xfqs * v2.y) + xfpx;
        float vy = (xfqs * v2.x + xfqc * v2.y) + xfpy;
        lower.x = lower.x < vx ? lower.x : vx;
        lower.y = lower.y < vy ? lower.y : vy;
        upper.x = upper.x > vx ? upper.x : vx;
        upper.y = upper.y > vy ? upper.y : vy;
    }
    lower.x -= m_radius;
    lower.y -= m_radius;
    upper.x += m_radius;
    upper.y += m_radius;
}
