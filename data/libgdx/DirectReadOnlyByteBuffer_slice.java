public ByteBuffer slice() {
    DirectReadOnlyByteBuffer slice = new DirectReadOnlyByteBuffer(byteArray.buffer(), remaining(), byteArray.byteOffset() + position);
    slice.order = order;
    return slice;
}
