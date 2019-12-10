/**
 * create a joint to constrain bodies together. No reference to the definition is retained. This
 * may cause the connected bodies to cease colliding.
 *
 * @warning This function is locked during callbacks.
 * @param def
 * @return
 */
public Joint createJoint(JointDef def) {
    assert (isLocked() == false);
    if (isLocked()) {
        return null;
    }
    Joint j = Joint.create(this, def);
    // Connect to the world list.
    j.m_prev = null;
    j.m_next = m_jointList;
    if (m_jointList != null) {
        m_jointList.m_prev = j;
    }
    m_jointList = j;
    ++m_jointCount;
    // Connect to the bodies' doubly linked lists.
    j.m_edgeA.joint = j;
    j.m_edgeA.other = j.getBodyB();
    j.m_edgeA.prev = null;
    j.m_edgeA.next = j.getBodyA().m_jointList;
    if (j.getBodyA().m_jointList != null) {
        j.getBodyA().m_jointList.prev = j.m_edgeA;
    }
    j.getBodyA().m_jointList = j.m_edgeA;
    j.m_edgeB.joint = j;
    j.m_edgeB.other = j.getBodyA();
    j.m_edgeB.prev = null;
    j.m_edgeB.next = j.getBodyB().m_jointList;
    if (j.getBodyB().m_jointList != null) {
        j.getBodyB().m_jointList.prev = j.m_edgeB;
    }
    j.getBodyB().m_jointList = j.m_edgeB;
    Body bodyA = def.bodyA;
    Body bodyB = def.bodyB;
    // If the joint prevents collisions, then flag any contacts for filtering.
    if (def.collideConnected == false) {
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
    return j;
}
