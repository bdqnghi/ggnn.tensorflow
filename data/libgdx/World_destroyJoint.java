/**
 * destroy a joint. This may cause the connected bodies to begin colliding.
 *
 * @warning This function is locked during callbacks.
 * @param joint
 */
public void destroyJoint(Joint j) {
    assert (isLocked() == false);
    if (isLocked()) {
        return;
    }
    boolean collideConnected = j.getCollideConnected();
    // Remove from the doubly linked list.
    if (j.m_prev != null) {
        j.m_prev.m_next = j.m_next;
    }
    if (j.m_next != null) {
        j.m_next.m_prev = j.m_prev;
    }
    if (j == m_jointList) {
        m_jointList = j.m_next;
    }
    // Disconnect from island graph.
    Body bodyA = j.getBodyA();
    Body bodyB = j.getBodyB();
    // Wake up connected bodies.
    bodyA.setAwake(true);
    bodyB.setAwake(true);
    // Remove from body 1.
    if (j.m_edgeA.prev != null) {
        j.m_edgeA.prev.next = j.m_edgeA.next;
    }
    if (j.m_edgeA.next != null) {
        j.m_edgeA.next.prev = j.m_edgeA.prev;
    }
    if (j.m_edgeA == bodyA.m_jointList) {
        bodyA.m_jointList = j.m_edgeA.next;
    }
    j.m_edgeA.prev = null;
    j.m_edgeA.next = null;
    // Remove from body 2
    if (j.m_edgeB.prev != null) {
        j.m_edgeB.prev.next = j.m_edgeB.next;
    }
    if (j.m_edgeB.next != null) {
        j.m_edgeB.next.prev = j.m_edgeB.prev;
    }
    if (j.m_edgeB == bodyB.m_jointList) {
        bodyB.m_jointList = j.m_edgeB.next;
    }
    j.m_edgeB.prev = null;
    j.m_edgeB.next = null;
    Joint.destroy(j);
    assert (m_jointCount > 0);
    --m_jointCount;
    // If the joint prevents collisions, then flag any contacts for filtering.
    if (collideConnected == false) {
        ContactEdge edge = bodyB.getContactList();
        while (edge != null) {
            if (edge.other == bodyA) {
                // Flag the contact for filtering at the next time step (where either
                // body is awake).
                edge.contact.flagForFiltering();
            }
            edge = edge.next;
        }
    }
}
