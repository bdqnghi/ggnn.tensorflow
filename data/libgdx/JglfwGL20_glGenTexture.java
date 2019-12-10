public int glGenTexture() {
    ensureBufferCapacity(4);
    intBuffer.position(0);
    intBuffer.limit(1);
    glGenTextures(1, intBuffer);
    return intBuffer.get(0);
}
