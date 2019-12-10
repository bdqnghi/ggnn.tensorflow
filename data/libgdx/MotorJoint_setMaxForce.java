/**
 * Set the maximum friction force in N.
 *
 * @param force
 */
public void setMaxForce(float force) {
    assert (force >= 0.0f);
    m_maxForce = force;
}
