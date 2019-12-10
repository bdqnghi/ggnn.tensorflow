public ByteBuffer slice() {
    DirectReadWriteByteBuffer slice = new DirectReadWriteByteBuffer(byteArray.buffer(), remaining(), byteArray.byteOffset() + position);
    slice.order = order;
    return slice;
}
