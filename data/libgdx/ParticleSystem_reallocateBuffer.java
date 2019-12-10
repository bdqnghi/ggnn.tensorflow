static int[] reallocateBuffer(ParticleBufferInt buffer, int oldCapacity, int newCapacity, boolean deferred) {
    assert (newCapacity > oldCapacity);
    return BufferUtils.reallocateBuffer(buffer.data, buffer.userSuppliedCapacity, oldCapacity, newCapacity, deferred);
}
