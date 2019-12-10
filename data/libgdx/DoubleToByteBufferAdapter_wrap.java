// implements DirectBuffer {
static DoubleBuffer wrap(ByteBuffer byteBuffer) {
    return new DoubleToByteBufferAdapter(byteBuffer.slice());
}
