/**
 * Is the world locked (in the middle of a time step).
 *
 * @return
 */
public boolean isLocked() {
    return (m_flags & LOCKED) == LOCKED;
}
