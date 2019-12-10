public DoubleBuffer slice() {
    return new ReadWriteDoubleArrayBuffer(remaining(), backingArray, offset + position);
}
