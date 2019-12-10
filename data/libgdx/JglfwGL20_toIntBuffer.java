private IntBuffer toIntBuffer(int v) {
    ensureBufferCapacity(4);
    intBuffer.put(0, v);
    intBuffer.position(0);
    intBuffer.limit(1);
    return intBuffer;
}
