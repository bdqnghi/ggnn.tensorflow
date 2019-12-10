static CharBuffer wrap(ByteBuffer byteBuffer) {
    return new CharToByteBufferAdapter(byteBuffer.slice());
}
