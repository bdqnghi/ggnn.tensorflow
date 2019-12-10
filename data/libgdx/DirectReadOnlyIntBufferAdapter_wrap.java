// implements DirectBuffer {
static IntBuffer wrap(DirectByteBuffer byteBuffer) {
    return new DirectReadOnlyIntBufferAdapter((DirectByteBuffer) byteBuffer.slice());
}
