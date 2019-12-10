@Override
public final boolean testPoint(final Transform transform, final Vec2 p) {
    // Rot.mulToOutUnsafe(transform.q, m_p, center);
    // center.addLocal(transform.p);
    // 
    // final Vec2 d = center.subLocal(p).negateLocal();
    // return Vec2.dot(d, d) <= m_radius * m_radius;
    final Rot q = transform.q;
    final Vec2 tp = transform.p;
    float centerx = -(q.c * m_p.x - q.s * m_p.y + tp.x - p.x);
    float centery = -(q.s * m_p.x + q.c * m_p.y + tp.y - p.y);
    return centerx * centerx + centery * centery <= m_radius * m_radius;
}
