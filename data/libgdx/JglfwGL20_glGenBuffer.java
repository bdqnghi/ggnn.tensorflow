public int glGenBuffer() {
    ensureBufferCapacity(4);
    intBuffer.position(0);
    intBuffer.limit(1);
    glGenBuffers(1, intBuffer);
    return intBuffer.get(0);
}
