/**
 * Apply an angular impulse.
 *
 * @param impulse the angular impulse in units of kg*m*m/s
 */
public void applyAngularImpulse(float impulse) {
    if (m_type != BodyType.DYNAMIC) {
        return;
    }
    if (isAwake() == false) {
        setAwake(true);
    }
    m_angularVelocity += m_invI * impulse;
}
