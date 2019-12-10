@Override
public DoubleBuffer compact() {
    if (byteBuffer.isReadOnly()) {
        throw new ReadOnlyBufferException();
    }
    byteBuffer.limit(limit << 3);
    byteBuffer.position(position << 3);
    byteBuffer.compact();
    byteBuffer.clear();
    position = limit - position;
    limit = capacity;
    mark = UNSET_MARK;
    return this;
}
