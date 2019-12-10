// implements DirectBuffer {
static FloatBuffer wrap(ByteBuffer byteBuffer) {
    return new FloatToByteBufferAdapter(byteBuffer.slice());
}
