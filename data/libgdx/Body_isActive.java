/**
 * Get the active state of the body.
 *
 * @return
 */
public boolean isActive() {
    return (m_flags & e_activeFlag) == e_activeFlag;
}
