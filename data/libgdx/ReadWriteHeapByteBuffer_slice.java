public ByteBuffer slice() {
    ReadWriteHeapByteBuffer slice = new ReadWriteHeapByteBuffer(backingArray, remaining(), offset + position);
    slice.order = order;
    return slice;
}
