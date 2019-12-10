protected final void unbufferMove(int proxyId) {
    for (int i = 0; i < m_moveCount; i++) {
        if (m_moveBuffer[i] == proxyId) {
            m_moveBuffer[i] = NULL_PROXY;
        }
    }
}
