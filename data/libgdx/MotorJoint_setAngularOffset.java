/**
 * Set the target angular offset, in radians.
 *
 * @param angularOffset
 */
public void setAngularOffset(float angularOffset) {
    if (angularOffset != m_angularOffset) {
        m_bodyA.setAwake(true);
        m_bodyB.setAwake(true);
        m_angularOffset = angularOffset;
    }
}
