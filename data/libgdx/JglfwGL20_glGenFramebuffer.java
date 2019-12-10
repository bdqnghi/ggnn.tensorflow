public int glGenFramebuffer() {
    ensureBufferCapacity(4);
    intBuffer.position(0);
    intBuffer.limit(1);
    glGenFramebuffers(1, intBuffer);
    return intBuffer.get(0);
}
