// implements DirectBuffer {
static IntBuffer wrap(ByteBuffer byteBuffer) {
    return new IntToByteBufferAdapter(byteBuffer.slice());
}
