public ParticleColor[] getParticleColorBuffer() {
    m_colorBuffer.data = requestParticleBuffer(ParticleColor.class, m_colorBuffer.data);
    return m_colorBuffer.data;
}
