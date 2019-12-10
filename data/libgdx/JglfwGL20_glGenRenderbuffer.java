public int glGenRenderbuffer() {
    ensureBufferCapacity(4);
    intBuffer.position(0);
    intBuffer.limit(1);
    glGenRenderbuffers(1, intBuffer);
    return intBuffer.get(0);
}
