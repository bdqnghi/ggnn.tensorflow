/**
 * Set the angular velocity.
 *
 * @param omega the new angular velocity in radians/second.
 */
public final void setAngularVelocity(float w) {
    if (m_type == BodyType.STATIC) {
        return;
    }
    if (w * w > 0f) {
        setAwake(true);
    }
    m_angularVelocity = w;
}
