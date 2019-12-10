/**
 * Set the position of the body's origin and rotation. This breaks any contacts and wakes the
 * other bodies. Manipulating a body's transform may cause non-physical behavior. Note: contacts
 * are updated on the next call to World.step().
 *
 * @param position the world position of the body's local origin.
 * @param angle the world rotation in radians.
 */
public final void setTransform(Vec2 position, float angle) {
    assert (m_world.isLocked() == false);
    if (m_world.isLocked() == true) {
        return;
    }
    m_xf.q.set(angle);
    m_xf.p.set(position);
    // m_sweep.c0 = m_sweep.c = Mul(m_xf, m_sweep.localCenter);
    Transform.mulToOutUnsafe(m_xf, m_sweep.localCenter, m_sweep.c);
    m_sweep.a = angle;
    m_sweep.c0.set(m_sweep.c);
    m_sweep.a0 = m_sweep.a;
    BroadPhase broadPhase = m_world.m_contactManager.m_broadPhase;
    for (Fixture f = m_fixtureList; f != null; f = f.m_next) {
        f.synchronize(broadPhase, m_xf, m_xf);
    }
}
