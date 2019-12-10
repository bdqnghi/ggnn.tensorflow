// implements DirectBuffer {
static ShortBuffer wrap(ByteBuffer byteBuffer) {
    return new ShortToByteBufferAdapter(byteBuffer.slice());
}
