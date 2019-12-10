protected final void synchronizeFixtures() {
    final Transform xf1 = pxf;
    // xf1.position = m_sweep.c0 - Mul(xf1.R, m_sweep.localCenter);
    // xf1.q.set(m_sweep.a0);
    // Rot.mulToOutUnsafe(xf1.q, m_sweep.localCenter, xf1.p);
    // xf1.p.mulLocal(-1).addLocal(m_sweep.c0);
    // inlined:
    xf1.q.s = MathUtils.sin(m_sweep.a0);
    xf1.q.c = MathUtils.cos(m_sweep.a0);
    xf1.p.x = m_sweep.c0.x - xf1.q.c * m_sweep.localCenter.x + xf1.q.s * m_sweep.localCenter.y;
    xf1.p.y = m_sweep.c0.y - xf1.q.s * m_sweep.localCenter.x - xf1.q.c * m_sweep.localCenter.y;
    for (Fixture f = m_fixtureList; f != null; f = f.m_next) {
        f.synchronize(m_world.m_contactManager.m_broadPhase, xf1, m_xf);
    }
}
