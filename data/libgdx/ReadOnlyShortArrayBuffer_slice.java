public ShortBuffer slice() {
    return new ReadOnlyShortArrayBuffer(remaining(), backingArray, offset + position);
}
