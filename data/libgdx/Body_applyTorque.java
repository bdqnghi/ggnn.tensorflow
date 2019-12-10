/**
 * Apply a torque. This affects the angular velocity without affecting the linear velocity of the
 * center of mass. This wakes up the body.
 *
 * @param torque about the z-axis (out of the screen), usually in N-m.
 */
public final void applyTorque(float torque) {
    if (m_type != BodyType.DYNAMIC) {
        return;
    }
    if (isAwake() == false) {
        setAwake(true);
    }
    m_torque += torque;
}
