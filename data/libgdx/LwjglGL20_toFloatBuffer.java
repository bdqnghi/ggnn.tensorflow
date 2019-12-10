private FloatBuffer toFloatBuffer(float[] v, int offset, int count) {
    ensureBufferCapacity(count << 2);
    floatBuffer.clear();
    com.badlogic.gdx.utils.BufferUtils.copy(v, floatBuffer, count, offset);
    return floatBuffer;
}
