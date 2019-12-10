/**
 * Apply a force at a world point. If the force is not applied at the center of mass, it will
 * generate a torque and affect the angular velocity. This wakes up the body.
 *
 * @param force the world force vector, usually in Newtons (N).
 * @param point the world position of the point of application.
 */
public final void applyForce(Vec2 force, Vec2 point) {
    if (m_type != BodyType.DYNAMIC) {
        return;
    }
    if (isAwake() == false) {
        setAwake(true);
    }
    // m_force.addLocal(force);
    // Vec2 temp = tltemp.get();
    // temp.set(point).subLocal(m_sweep.c);
    // m_torque += Vec2.cross(temp, force);
    m_force.x += force.x;
    m_force.y += force.y;
    m_torque += (point.x - m_sweep.c.x) * force.y - (point.y - m_sweep.c.y) * force.x;
}
