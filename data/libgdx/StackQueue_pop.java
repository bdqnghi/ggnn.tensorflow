public T pop() {
    assert (m_front < m_back);
    return m_buffer[m_front++];
}
