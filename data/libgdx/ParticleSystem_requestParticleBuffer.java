float[] requestParticleBuffer(float[] buffer) {
    if (buffer == null) {
        buffer = new float[m_internalAllocatedCapacity];
    }
    return buffer;
}
