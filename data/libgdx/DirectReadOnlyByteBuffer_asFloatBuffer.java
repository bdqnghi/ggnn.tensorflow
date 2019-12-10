public FloatBuffer asFloatBuffer() {
    return DirectReadOnlyFloatBufferAdapter.wrap(this);
}
