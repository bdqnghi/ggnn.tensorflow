public LongBuffer slice() {
    return new ReadOnlyLongArrayBuffer(remaining(), backingArray, offset + position);
}
