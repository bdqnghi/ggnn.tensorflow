@Override
public final void computeAABB(final AABB aabb, final Transform transform, int childIndex) {
    final Rot tq = transform.q;
    final Vec2 tp = transform.p;
    final float px = tq.c * m_p.x - tq.s * m_p.y + tp.x;
    final float py = tq.s * m_p.x + tq.c * m_p.y + tp.y;
    aabb.lowerBound.x = px - m_radius;
    aabb.lowerBound.y = py - m_radius;
    aabb.upperBound.x = px + m_radius;
    aabb.upperBound.y = py + m_radius;
}
