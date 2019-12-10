public ShortBuffer slice() {
    return new ReadWriteShortArrayBuffer(remaining(), backingArray, offset + position);
}
