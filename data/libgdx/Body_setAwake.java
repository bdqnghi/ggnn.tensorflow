/**
 * Set the sleep state of the body. A sleeping body has very low CPU cost.
 *
 * @param flag set to true to put body to sleep, false to wake it.
 * @param flag
 */
public void setAwake(boolean flag) {
    if (flag) {
        if ((m_flags & e_awakeFlag) == 0) {
            m_flags |= e_awakeFlag;
            m_sleepTime = 0.0f;
        }
    } else {
        m_flags &= ~e_awakeFlag;
        m_sleepTime = 0.0f;
        m_linearVelocity.setZero();
        m_angularVelocity = 0.0f;
        m_force.setZero();
        m_torque = 0.0f;
    }
}
