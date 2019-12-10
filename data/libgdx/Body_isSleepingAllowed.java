/**
 * Is this body allowed to sleep
 *
 * @return
 */
public boolean isSleepingAllowed() {
    return (m_flags & e_autoSleepFlag) == e_autoSleepFlag;
}
