public CharBuffer slice() {
    return new ReadOnlyCharArrayBuffer(remaining(), backingArray, offset + position);
}
