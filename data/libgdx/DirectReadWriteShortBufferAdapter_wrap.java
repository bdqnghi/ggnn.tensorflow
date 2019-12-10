// implements DirectBuffer {
static ShortBuffer wrap(DirectReadWriteByteBuffer byteBuffer) {
    return new DirectReadWriteShortBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.slice());
}
