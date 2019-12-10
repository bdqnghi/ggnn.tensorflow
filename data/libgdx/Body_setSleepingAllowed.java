/**
 * You can disable sleeping on this body. If you disable sleeping, the body will be woken.
 *
 * @param flag
 */
public void setSleepingAllowed(boolean flag) {
    if (flag) {
        m_flags |= e_autoSleepFlag;
    } else {
        m_flags &= ~e_autoSleepFlag;
        setAwake(true);
    }
}
