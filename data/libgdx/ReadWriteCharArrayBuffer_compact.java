public CharBuffer compact() {
    System.arraycopy(backingArray, position + offset, backingArray, offset, remaining());
    position = limit - position;
    limit = capacity;
    mark = UNSET_MARK;
    return this;
}
