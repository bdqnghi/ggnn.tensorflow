/**
 * Set the maximum friction torque in N*m.
 */
public void setMaxTorque(float torque) {
    assert (torque >= 0.0f);
    m_maxTorque = torque;
}
