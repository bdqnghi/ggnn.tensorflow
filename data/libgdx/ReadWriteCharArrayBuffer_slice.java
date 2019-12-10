public CharBuffer slice() {
    return new ReadWriteCharArrayBuffer(remaining(), backingArray, offset + position);
}
