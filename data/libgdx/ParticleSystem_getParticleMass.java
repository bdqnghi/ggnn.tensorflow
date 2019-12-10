float getParticleMass() {
    float stride = getParticleStride();
    return m_density * stride * stride;
}
