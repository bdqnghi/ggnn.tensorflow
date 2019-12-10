public ByteBuffer slice() {
    ReadOnlyHeapByteBuffer slice = new ReadOnlyHeapByteBuffer(backingArray, remaining(), offset + position);
    slice.order = order;
    return slice;
}
