public void push(T task) {
    if (m_back >= m_end) {
        System.arraycopy(m_buffer, m_front, m_buffer, 0, m_back - m_front);
        m_back -= m_front;
        m_front = 0;
        if (m_back >= m_end) {
            return;
        }
    }
    m_buffer[m_back++] = task;
}
