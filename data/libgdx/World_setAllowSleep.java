public void setAllowSleep(boolean flag) {
    if (flag == m_allowSleep) {
        return;
    }
    m_allowSleep = flag;
    if (m_allowSleep == false) {
        for (Body b = m_bodyList; b != null; b = b.m_next) {
            b.setAwake(true);
        }
    }
}
