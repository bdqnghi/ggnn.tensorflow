/**
 * Apply a force to the center of mass. This wakes up the body.
 *
 * @param force the world force vector, usually in Newtons (N).
 */
public final void applyForceToCenter(Vec2 force) {
    if (m_type != BodyType.DYNAMIC) {
        return;
    }
    if (isAwake() == false) {
        setAwake(true);
    }
    m_force.x += force.x;
    m_force.y += force.y;
}
