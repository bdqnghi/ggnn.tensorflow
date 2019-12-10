// implements DirectBuffer {
static FloatBuffer wrap(DirectByteBuffer byteBuffer) {
    return new DirectReadOnlyFloatBufferAdapter((DirectByteBuffer) byteBuffer.slice());
}
