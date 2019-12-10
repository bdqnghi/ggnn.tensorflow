/**
 * Set the active state of the body. An inactive body is not simulated and cannot be collided with
 * or woken up. If you pass a flag of true, all fixtures will be added to the broad-phase. If you
 * pass a flag of false, all fixtures will be removed from the broad-phase and all contacts will
 * be destroyed. Fixtures and joints are otherwise unaffected. You may continue to create/destroy
 * fixtures and joints on inactive bodies. Fixtures on an inactive body are implicitly inactive
 * and will not participate in collisions, ray-casts, or queries. Joints connected to an inactive
 * body are implicitly inactive. An inactive body is still owned by a World object and remains in
 * the body list.
 *
 * @param flag
 */
public void setActive(boolean flag) {
    assert (m_world.isLocked() == false);
    if (flag == isActive()) {
        return;
    }
    if (flag) {
        m_flags |= e_activeFlag;
        // Create all proxies.
        BroadPhase broadPhase = m_world.m_contactManager.m_broadPhase;
        for (Fixture f = m_fixtureList; f != null; f = f.m_next) {
            f.createProxies(broadPhase, m_xf);
        }
    // Contacts are created the next time step.
    } else {
        m_flags &= ~e_activeFlag;
        // Destroy all proxies.
        BroadPhase broadPhase = m_world.m_contactManager.m_broadPhase;
        for (Fixture f = m_fixtureList; f != null; f = f.m_next) {
            f.destroyProxies(broadPhase);
        }
        // Destroy the attached contacts.
        ContactEdge ce = m_contactList;
        while (ce != null) {
            ContactEdge ce0 = ce;
            ce = ce.next;
            m_world.m_contactManager.destroy(ce0.contact);
        }
        m_contactList = null;
    }
}
