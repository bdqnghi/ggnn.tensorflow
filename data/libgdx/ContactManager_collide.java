/**
 * This is the top level collision call for the time step. Here all the narrow phase collision is
 * processed for the world contact list.
 */
public void collide() {
    // Update awake contacts.
    Contact c = m_contactList;
    while (c != null) {
        Fixture fixtureA = c.getFixtureA();
        Fixture fixtureB = c.getFixtureB();
        int indexA = c.getChildIndexA();
        int indexB = c.getChildIndexB();
        Body bodyA = fixtureA.getBody();
        Body bodyB = fixtureB.getBody();
        // is this contact flagged for filtering?
        if ((c.m_flags & Contact.FILTER_FLAG) == Contact.FILTER_FLAG) {
            // Should these bodies collide?
            if (bodyB.shouldCollide(bodyA) == false) {
                Contact cNuke = c;
                c = cNuke.getNext();
                destroy(cNuke);
                continue;
            }
            // Check user filtering.
            if (m_contactFilter != null && m_contactFilter.shouldCollide(fixtureA, fixtureB) == false) {
                Contact cNuke = c;
                c = cNuke.getNext();
                destroy(cNuke);
                continue;
            }
            // Clear the filtering flag.
            c.m_flags &= ~Contact.FILTER_FLAG;
        }
        boolean activeA = bodyA.isAwake() && bodyA.m_type != BodyType.STATIC;
        boolean activeB = bodyB.isAwake() && bodyB.m_type != BodyType.STATIC;
        // At least one body must be awake and it must be dynamic or kinematic.
        if (activeA == false && activeB == false) {
            c = c.getNext();
            continue;
        }
        int proxyIdA = fixtureA.m_proxies[indexA].proxyId;
        int proxyIdB = fixtureB.m_proxies[indexB].proxyId;
        boolean overlap = m_broadPhase.testOverlap(proxyIdA, proxyIdB);
        // Here we destroy contacts that cease to overlap in the broad-phase.
        if (overlap == false) {
            Contact cNuke = c;
            c = cNuke.getNext();
            destroy(cNuke);
            continue;
        }
        // The contact persists.
        c.update(m_contactListener);
        c = c.getNext();
    }
}
