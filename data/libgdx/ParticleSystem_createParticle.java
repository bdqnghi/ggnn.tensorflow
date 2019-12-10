// public void assertNotSamePosition() {
// for (int i = 0; i < m_count; i++) {
// Vec2 vi = m_positionBuffer.data[i];
// for (int j = i + 1; j < m_count; j++) {
// Vec2 vj = m_positionBuffer.data[j];
// assert(vi.x != vj.x || vi.y != vj.y);
// }
// }
// }
public int createParticle(ParticleDef def) {
    if (m_count >= m_internalAllocatedCapacity) {
        int capacity = m_count != 0 ? 2 * m_count : Settings.minParticleBufferCapacity;
        capacity = limitCapacity(capacity, m_maxCount);
        capacity = limitCapacity(capacity, m_flagsBuffer.userSuppliedCapacity);
        capacity = limitCapacity(capacity, m_positionBuffer.userSuppliedCapacity);
        capacity = limitCapacity(capacity, m_velocityBuffer.userSuppliedCapacity);
        capacity = limitCapacity(capacity, m_colorBuffer.userSuppliedCapacity);
        capacity = limitCapacity(capacity, m_userDataBuffer.userSuppliedCapacity);
        if (m_internalAllocatedCapacity < capacity) {
            m_flagsBuffer.data = reallocateBuffer(m_flagsBuffer, m_internalAllocatedCapacity, capacity, false);
            m_positionBuffer.data = reallocateBuffer(m_positionBuffer, m_internalAllocatedCapacity, capacity, false);
            m_velocityBuffer.data = reallocateBuffer(m_velocityBuffer, m_internalAllocatedCapacity, capacity, false);
            m_accumulationBuffer = BufferUtils.reallocateBuffer(m_accumulationBuffer, 0, m_internalAllocatedCapacity, capacity, false);
            m_accumulation2Buffer = BufferUtils.reallocateBuffer(Vec2.class, m_accumulation2Buffer, 0, m_internalAllocatedCapacity, capacity, true);
            m_depthBuffer = BufferUtils.reallocateBuffer(m_depthBuffer, 0, m_internalAllocatedCapacity, capacity, true);
            m_colorBuffer.data = reallocateBuffer(m_colorBuffer, m_internalAllocatedCapacity, capacity, true);
            m_groupBuffer = BufferUtils.reallocateBuffer(ParticleGroup.class, m_groupBuffer, 0, m_internalAllocatedCapacity, capacity, false);
            m_userDataBuffer.data = reallocateBuffer(m_userDataBuffer, m_internalAllocatedCapacity, capacity, true);
            m_internalAllocatedCapacity = capacity;
        }
    }
    if (m_count >= m_internalAllocatedCapacity) {
        return Settings.invalidParticleIndex;
    }
    int index = m_count++;
    m_flagsBuffer.data[index] = def.flags;
    m_positionBuffer.data[index].set(def.position);
    // assertNotSamePosition();
    m_velocityBuffer.data[index].set(def.velocity);
    m_groupBuffer[index] = null;
    if (m_depthBuffer != null) {
        m_depthBuffer[index] = 0;
    }
    if (m_colorBuffer.data != null || def.color != null) {
        m_colorBuffer.data = requestParticleBuffer(m_colorBuffer.dataClass, m_colorBuffer.data);
        m_colorBuffer.data[index].set(def.color);
    }
    if (m_userDataBuffer.data != null || def.userData != null) {
        m_userDataBuffer.data = requestParticleBuffer(m_userDataBuffer.dataClass, m_userDataBuffer.data);
        m_userDataBuffer.data[index] = def.userData;
    }
    if (m_proxyCount >= m_proxyCapacity) {
        int oldCapacity = m_proxyCapacity;
        int newCapacity = m_proxyCount != 0 ? 2 * m_proxyCount : Settings.minParticleBufferCapacity;
        m_proxyBuffer = BufferUtils.reallocateBuffer(Proxy.class, m_proxyBuffer, oldCapacity, newCapacity);
        m_proxyCapacity = newCapacity;
    }
    m_proxyBuffer[m_proxyCount++].index = index;
    return index;
}
