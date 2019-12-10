/**
 * Set the type of this body. This may alter the mass and velocity.
 *
 * @param type
 */
public void setType(BodyType type) {
    assert (m_world.isLocked() == false);
    if (m_world.isLocked() == true) {
        return;
    }
    if (m_type == type) {
        return;
    }
    m_type = type;
    resetMassData();
    if (m_type == BodyType.STATIC) {
        m_linearVelocity.setZero();
        m_angularVelocity = 0.0f;
        m_sweep.a0 = m_sweep.a;
        m_sweep.c0.set(m_sweep.c);
        synchronizeFixtures();
    }
    setAwake(true);
    m_force.setZero();
    m_torque = 0.0f;
    // Delete the attached contacts.
    ContactEdge ce = m_contactList;
    while (ce != null) {
        ContactEdge ce0 = ce;
        ce = ce.next;
        m_world.m_contactManager.destroy(ce0.contact);
    }
    m_contactList = null;
    // Touch the proxies so that new contacts will be created (when appropriate)
    BroadPhase broadPhase = m_world.m_contactManager.m_broadPhase;
    for (Fixture f = m_fixtureList; f != null; f = f.m_next) {
        int proxyCount = f.m_proxyCount;
        for (int i = 0; i < proxyCount; ++i) {
            broadPhase.touchProxy(f.m_proxies[i].proxyId);
        }
    }
}
