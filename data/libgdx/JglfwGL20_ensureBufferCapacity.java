private void ensureBufferCapacity(int numBytes) {
    if (buffer == null || buffer.capacity() < numBytes) {
        buffer = com.badlogic.gdx.utils.BufferUtils.newByteBuffer(numBytes);
        floatBuffer = buffer.asFloatBuffer();
        intBuffer = buffer.asIntBuffer();
    }
}
