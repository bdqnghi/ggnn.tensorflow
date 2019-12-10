/**
 * Apply an impulse at a point. This immediately modifies the velocity. It also modifies the
 * angular velocity if the point of application is not at the center of mass. This wakes up the
 * body if 'wake' is set to true. If the body is sleeping and 'wake' is false, then there is no
 * effect.
 *
 * @param impulse the world impulse vector, usually in N-seconds or kg-m/s.
 * @param point the world position of the point of application.
 * @param wake also wake up the body
 */
public final void applyLinearImpulse(Vec2 impulse, Vec2 point, boolean wake) {
    if (m_type != BodyType.DYNAMIC) {
        return;
    }
    if (!isAwake()) {
        if (wake) {
            setAwake(true);
        } else {
            return;
        }
    }
    m_linearVelocity.x += impulse.x * m_invMass;
    m_linearVelocity.y += impulse.y * m_invMass;
    m_angularVelocity += m_invI * ((point.x - m_sweep.c.x) * impulse.y - (point.y - m_sweep.c.y) * impulse.x);
}
