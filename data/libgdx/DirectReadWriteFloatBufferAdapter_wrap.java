// implements DirectBuffer {
static FloatBuffer wrap(DirectReadWriteByteBuffer byteBuffer) {
    return new DirectReadWriteFloatBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.slice());
}
