/**
 * create a rigid body given a definition. No reference to the definition is retained.
 *
 * @warning This function is locked during callbacks.
 * @param def
 * @return
 */
public Body createBody(BodyDef def) {
    assert (isLocked() == false);
    if (isLocked()) {
        return null;
    }
    // TODO djm pooling
    Body b = new Body(def, this);
    // add to world doubly linked list
    b.m_prev = null;
    b.m_next = m_bodyList;
    if (m_bodyList != null) {
        m_bodyList.m_prev = b;
    }
    m_bodyList = b;
    ++m_bodyCount;
    return b;
}
