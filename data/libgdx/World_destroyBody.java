/**
 * destroy a rigid body given a definition. No reference to the definition is retained. This
 * function is locked during callbacks.
 *
 * @warning This automatically deletes all associated shapes and joints.
 * @warning This function is locked during callbacks.
 * @param body
 */
public void destroyBody(Body body) {
    assert (m_bodyCount > 0);
    assert (isLocked() == false);
    if (isLocked()) {
        return;
    }
    // Delete the attached joints.
    JointEdge je = body.m_jointList;
    while (je != null) {
        JointEdge je0 = je;
        je = je.next;
        if (m_destructionListener != null) {
            m_destructionListener.sayGoodbye(je0.joint);
        }
        destroyJoint(je0.joint);
        body.m_jointList = je;
    }
    body.m_jointList = null;
    // Delete the attached contacts.
    ContactEdge ce = body.m_contactList;
    while (ce != null) {
        ContactEdge ce0 = ce;
        ce = ce.next;
        m_contactManager.destroy(ce0.contact);
    }
    body.m_contactList = null;
    Fixture f = body.m_fixtureList;
    while (f != null) {
        Fixture f0 = f;
        f = f.m_next;
        if (m_destructionListener != null) {
            m_destructionListener.sayGoodbye(f0);
        }
        f0.destroyProxies(m_contactManager.m_broadPhase);
        f0.destroy();
        // TODO djm recycle fixtures (here or in that destroy method)
        body.m_fixtureList = f;
        body.m_fixtureCount -= 1;
    }
    body.m_fixtureList = null;
    body.m_fixtureCount = 0;
    // Remove world body list.
    if (body.m_prev != null) {
        body.m_prev.m_next = body.m_next;
    }
    if (body.m_next != null) {
        body.m_next.m_prev = body.m_prev;
    }
    if (body == m_bodyList) {
        m_bodyList = body.m_next;
    }
    --m_bodyCount;
// TODO djm recycle body
}
