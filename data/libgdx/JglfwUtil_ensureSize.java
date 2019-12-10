static private void ensureSize(int n) {
    if (buffer.capacity() < n) {
        buffer = ByteBuffer.allocateDirect(n).order(ByteOrder.nativeOrder());
        bufferInt = buffer.asIntBuffer();
        bufferFloat = buffer.asFloatBuffer();
    }
}
