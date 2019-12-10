public DoubleBuffer slice() {
    return new ReadOnlyDoubleArrayBuffer(remaining(), backingArray, offset + position);
}
