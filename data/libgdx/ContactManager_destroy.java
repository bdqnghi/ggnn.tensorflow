public void destroy(Contact c) {
    Fixture fixtureA = c.getFixtureA();
    Fixture fixtureB = c.getFixtureB();
    Body bodyA = fixtureA.getBody();
    Body bodyB = fixtureB.getBody();
    if (m_contactListener != null && c.isTouching()) {
        m_contactListener.endContact(c);
    }
    // Remove from the world.
    if (c.m_prev != null) {
        c.m_prev.m_next = c.m_next;
    }
    if (c.m_next != null) {
        c.m_next.m_prev = c.m_prev;
    }
    if (c == m_contactList) {
        m_contactList = c.m_next;
    }
    // Remove from body 1
    if (c.m_nodeA.prev != null) {
        c.m_nodeA.prev.next = c.m_nodeA.next;
    }
    if (c.m_nodeA.next != null) {
        c.m_nodeA.next.prev = c.m_nodeA.prev;
    }
    if (c.m_nodeA == bodyA.m_contactList) {
        bodyA.m_contactList = c.m_nodeA.next;
    }
    // Remove from body 2
    if (c.m_nodeB.prev != null) {
        c.m_nodeB.prev.next = c.m_nodeB.next;
    }
    if (c.m_nodeB.next != null) {
        c.m_nodeB.next.prev = c.m_nodeB.prev;
    }
    if (c.m_nodeB == bodyB.m_contactList) {
        bodyB.m_contactList = c.m_nodeB.next;
    }
    // Call the factory.
    pool.pushContact(c);
    --m_contactCount;
}
