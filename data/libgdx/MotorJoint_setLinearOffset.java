/**
 * Set the target linear offset, in frame A, in meters.
 */
public void setLinearOffset(Vec2 linearOffset) {
    if (linearOffset.x != m_linearOffset.x || linearOffset.y != m_linearOffset.y) {
        m_bodyA.setAwake(true);
        m_bodyB.setAwake(true);
        m_linearOffset.set(linearOffset);
    }
}
