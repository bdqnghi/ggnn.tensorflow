/**
 * Set the linear velocity of the center of mass.
 *
 * @param v the new linear velocity of the center of mass.
 */
public final void setLinearVelocity(Vec2 v) {
    if (m_type == BodyType.STATIC) {
        return;
    }
    if (Vec2.dot(v, v) > 0.0f) {
        setAwake(true);
    }
    m_linearVelocity.set(v);
}
