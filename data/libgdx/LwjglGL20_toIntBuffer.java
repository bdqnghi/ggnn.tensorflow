private IntBuffer toIntBuffer(int[] v, int offset, int count) {
    ensureBufferCapacity(count << 2);
    floatBuffer.clear();
    com.badlogic.gdx.utils.BufferUtils.copy(v, count, offset, intBuffer);
    return intBuffer;
}
