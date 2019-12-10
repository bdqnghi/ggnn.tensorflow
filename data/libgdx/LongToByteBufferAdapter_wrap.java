static LongBuffer wrap(ByteBuffer byteBuffer) {
    return new LongToByteBufferAdapter(byteBuffer.slice());
}
