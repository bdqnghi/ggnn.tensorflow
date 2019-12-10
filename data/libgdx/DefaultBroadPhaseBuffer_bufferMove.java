protected final void bufferMove(int proxyId) {
    if (m_moveCount == m_moveCapacity) {
        int[] old = m_moveBuffer;
        m_moveCapacity *= 2;
        m_moveBuffer = new int[m_moveCapacity];
        System.arraycopy(old, 0, m_moveBuffer, 0, old.length);
    }
    m_moveBuffer[m_moveCount] = proxyId;
    ++m_moveCount;
}
