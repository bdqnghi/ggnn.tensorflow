/**
 * This is used to prevent connected bodies from colliding. It may lie, depending on the
 * collideConnected flag.
 *
 * @param other
 * @return
 */
public boolean shouldCollide(Body other) {
    // At least one body should be dynamic.
    if (m_type != BodyType.DYNAMIC && other.m_type != BodyType.DYNAMIC) {
        return false;
    }
    // Does a joint prevent collision?
    for (JointEdge jn = m_jointList; jn != null; jn = jn.next) {
        if (jn.other == other) {
            if (jn.joint.getCollideConnected() == false) {
                return false;
            }
        }
    }
    return true;
}
