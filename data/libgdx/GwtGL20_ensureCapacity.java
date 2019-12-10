private void ensureCapacity(IntBuffer buffer) {
    if (buffer.remaining() > intBuffer.length()) {
        intBuffer = TypedArrays.createInt32Array(buffer.remaining());
    }
}
