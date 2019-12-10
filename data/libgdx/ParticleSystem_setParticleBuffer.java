<T> void setParticleBuffer(ParticleBuffer<T> buffer, T[] newData, int newCapacity) {
    assert ((newData != null && newCapacity != 0) || (newData == null && newCapacity == 0));
    if (buffer.userSuppliedCapacity != 0) {
    // m_world.m_blockAllocator.Free(buffer.data, sizeof(T) * m_internalAllocatedCapacity);
    }
    buffer.data = newData;
    buffer.userSuppliedCapacity = newCapacity;
}
