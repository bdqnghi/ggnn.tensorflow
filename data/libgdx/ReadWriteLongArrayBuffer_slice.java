public LongBuffer slice() {
    return new ReadWriteLongArrayBuffer(remaining(), backingArray, offset + position);
}
