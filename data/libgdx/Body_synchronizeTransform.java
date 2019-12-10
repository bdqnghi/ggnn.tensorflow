public final void synchronizeTransform() {
    // m_xf.q.set(m_sweep.a);
    // 
    // // m_xf.position = m_sweep.c - Mul(m_xf.R, m_sweep.localCenter);
    // Rot.mulToOutUnsafe(m_xf.q, m_sweep.localCenter, m_xf.p);
    // m_xf.p.mulLocal(-1).addLocal(m_sweep.c);
    // 
    m_xf.q.s = MathUtils.sin(m_sweep.a);
    m_xf.q.c = MathUtils.cos(m_sweep.a);
    Rot q = m_xf.q;
    Vec2 v = m_sweep.localCenter;
    m_xf.p.x = m_sweep.c.x - q.c * v.x + q.s * v.y;
    m_xf.p.y = m_sweep.c.y - q.s * v.x - q.c * v.y;
}
