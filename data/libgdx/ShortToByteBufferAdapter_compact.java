@Override
public ShortBuffer compact() {
    if (byteBuffer.isReadOnly()) {
        throw new ReadOnlyBufferException();
    }
    byteBuffer.limit(limit << 1);
    byteBuffer.position(position << 1);
    byteBuffer.compact();
    byteBuffer.clear();
    position = limit - position;
    limit = capacity;
    mark = UNSET_MARK;
    return this;
}
