public void reset(T[] buffer) {
    m_buffer = buffer;
    m_front = 0;
    m_back = 0;
    m_end = buffer.length;
}
