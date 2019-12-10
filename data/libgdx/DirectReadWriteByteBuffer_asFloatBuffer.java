public FloatBuffer asFloatBuffer() {
    return DirectReadWriteFloatBufferAdapter.wrap(this);
}
