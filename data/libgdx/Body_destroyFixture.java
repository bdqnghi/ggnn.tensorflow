/**
 * Destroy a fixture. This removes the fixture from the broad-phase and destroys all contacts
 * associated with this fixture. This will automatically adjust the mass of the body if the body
 * is dynamic and the fixture has positive density. All fixtures attached to a body are implicitly
 * destroyed when the body is destroyed.
 *
 * @param fixture the fixture to be removed.
 * @warning This function is locked during callbacks.
 */
public final void destroyFixture(Fixture fixture) {
    assert (m_world.isLocked() == false);
    if (m_world.isLocked() == true) {
        return;
    }
    assert (fixture.m_body == this);
    // Remove the fixture from this body's singly linked list.
    assert (m_fixtureCount > 0);
    Fixture node = m_fixtureList;
    // java change
    Fixture last = null;
    boolean found = false;
    while (node != null) {
        if (node == fixture) {
            node = fixture.m_next;
            found = true;
            break;
        }
        last = node;
        node = node.m_next;
    }
    // You tried to remove a shape that is not attached to this body.
    assert (found);
    // java change, remove it from the list
    if (last == null) {
        m_fixtureList = fixture.m_next;
    } else {
        last.m_next = fixture.m_next;
    }
    // Destroy any contacts associated with the fixture.
    ContactEdge edge = m_contactList;
    while (edge != null) {
        Contact c = edge.contact;
        edge = edge.next;
        Fixture fixtureA = c.getFixtureA();
        Fixture fixtureB = c.getFixtureB();
        if (fixture == fixtureA || fixture == fixtureB) {
            // This destroys the contact and removes it from
            // this body's contact list.
            m_world.m_contactManager.destroy(c);
        }
    }
    if ((m_flags & e_activeFlag) == e_activeFlag) {
        BroadPhase broadPhase = m_world.m_contactManager.m_broadPhase;
        fixture.destroyProxies(broadPhase);
    }
    fixture.destroy();
    fixture.m_body = null;
    fixture.m_next = null;
    fixture = null;
    --m_fixtureCount;
    // Reset the mass data.
    resetMassData();
}
