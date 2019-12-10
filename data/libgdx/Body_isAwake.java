/**
 * Get the sleeping state of this body.
 *
 * @return true if the body is awake.
 */
public boolean isAwake() {
    return (m_flags & e_awakeFlag) == e_awakeFlag;
}
