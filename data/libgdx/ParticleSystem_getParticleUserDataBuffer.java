public Object[] getParticleUserDataBuffer() {
    m_userDataBuffer.data = requestParticleBuffer(Object.class, m_userDataBuffer.data);
    return m_userDataBuffer.data;
}
