public FloatBuffer asReadOnlyBuffer() {
    return ReadOnlyFloatArrayBuffer.copy(this, mark);
}
