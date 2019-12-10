/**
 * Set flag to control automatic clearing of forces after each time step.
 *
 * @param flag
 */
public void setAutoClearForces(boolean flag) {
    if (flag) {
        m_flags |= CLEAR_FORCES;
    } else {
        m_flags &= ~CLEAR_FORCES;
    }
}
