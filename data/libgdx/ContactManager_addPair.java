/**
 * Broad-phase callback.
 *
 * @param proxyUserDataA
 * @param proxyUserDataB
 */
public void addPair(Object proxyUserDataA, Object proxyUserDataB) {
    FixtureProxy proxyA = (FixtureProxy) proxyUserDataA;
    FixtureProxy proxyB = (FixtureProxy) proxyUserDataB;
    Fixture fixtureA = proxyA.fixture;
    Fixture fixtureB = proxyB.fixture;
    int indexA = proxyA.childIndex;
    int indexB = proxyB.childIndex;
    Body bodyA = fixtureA.getBody();
    Body bodyB = fixtureB.getBody();
    // Are the fixtures on the same body?
    if (bodyA == bodyB) {
        return;
    }
    // TODO_ERIN use a hash table to remove a potential bottleneck when both
    // bodies have a lot of contacts.
    // Does a contact already exist?
    ContactEdge edge = bodyB.getContactList();
    while (edge != null) {
        if (edge.other == bodyA) {
            Fixture fA = edge.contact.getFixtureA();
            Fixture fB = edge.contact.getFixtureB();
            int iA = edge.contact.getChildIndexA();
            int iB = edge.contact.getChildIndexB();
            if (fA == fixtureA && iA == indexA && fB == fixtureB && iB == indexB) {
                // A contact already exists.
                return;
            }
            if (fA == fixtureB && iA == indexB && fB == fixtureA && iB == indexA) {
                // A contact already exists.
                return;
            }
        }
        edge = edge.next;
    }
    // Does a joint override collision? is at least one body dynamic?
    if (bodyB.shouldCollide(bodyA) == false) {
        return;
    }
    // Check user filtering.
    if (m_contactFilter != null && m_contactFilter.shouldCollide(fixtureA, fixtureB) == false) {
        return;
    }
    // Call the factory.
    Contact c = pool.popContact(fixtureA, indexA, fixtureB, indexB);
    if (c == null) {
        return;
    }
    // Contact creation may swap fixtures.
    fixtureA = c.getFixtureA();
    fixtureB = c.getFixtureB();
    indexA = c.getChildIndexA();
    indexB = c.getChildIndexB();
    bodyA = fixtureA.getBody();
    bodyB = fixtureB.getBody();
    // Insert into the world.
    c.m_prev = null;
    c.m_next = m_contactList;
    if (m_contactList != null) {
        m_contactList.m_prev = c;
    }
    m_contactList = c;
    // Connect to island graph.
    // Connect to body A
    c.m_nodeA.contact = c;
    c.m_nodeA.other = bodyB;
    c.m_nodeA.prev = null;
    c.m_nodeA.next = bodyA.m_contactList;
    if (bodyA.m_contactList != null) {
        bodyA.m_contactList.prev = c.m_nodeA;
    }
    bodyA.m_contactList = c.m_nodeA;
    // Connect to body B
    c.m_nodeB.contact = c;
    c.m_nodeB.other = bodyA;
    c.m_nodeB.prev = null;
    c.m_nodeB.next = bodyB.m_contactList;
    if (bodyB.m_contactList != null) {
        bodyB.m_contactList.prev = c.m_nodeB;
    }
    bodyB.m_contactList = c.m_nodeB;
    // wake up the bodies
    if (!fixtureA.isSensor() && !fixtureB.isSensor()) {
        bodyA.setAwake(true);
        bodyB.setAwake(true);
    }
    ++m_contactCount;
}
