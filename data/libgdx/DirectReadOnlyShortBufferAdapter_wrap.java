static ShortBuffer wrap(DirectByteBuffer byteBuffer) {
    return new DirectReadOnlyShortBufferAdapter((DirectByteBuffer) byteBuffer.slice());
}
