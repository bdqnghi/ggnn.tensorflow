/**
 * Get the flag that controls automatic clearing of forces after each time step.
 *
 * @return
 */
public boolean getAutoClearForces() {
    return (m_flags & CLEAR_FORCES) == CLEAR_FORCES;
}
