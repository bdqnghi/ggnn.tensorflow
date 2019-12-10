protected final void advance(float t) {
    // Advance to the new safe time. This doesn't sync the broad-phase.
    m_sweep.advance(t);
    m_sweep.c.set(m_sweep.c0);
    m_sweep.a = m_sweep.a0;
    m_xf.q.set(m_sweep.a);
    // m_xf.position = m_sweep.c - Mul(m_xf.R, m_sweep.localCenter);
    Rot.mulToOutUnsafe(m_xf.q, m_sweep.localCenter, m_xf.p);
    m_xf.p.mulLocal(-1).addLocal(m_sweep.c);
}
