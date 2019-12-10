@Override
public float computeDistanceToOut(Transform xf, Vec2 p, int childIndex, Vec2 normalOut) {
    final Rot xfq = xf.q;
    float centerx = xfq.c * m_p.x - xfq.s * m_p.y + xf.p.x;
    float centery = xfq.s * m_p.x + xfq.c * m_p.y + xf.p.y;
    float dx = p.x - centerx;
    float dy = p.y - centery;
    float d1 = MathUtils.sqrt(dx * dx + dy * dy);
    normalOut.x = dx * 1 / d1;
    normalOut.y = dy * 1 / d1;
    return d1 - m_radius;
}
