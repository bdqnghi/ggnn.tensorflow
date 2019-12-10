@Override
public FloatBuffer compact() {
    if (byteBuffer.isReadOnly()) {
        throw new ReadOnlyBufferException();
    }
    byteBuffer.limit(limit << 2);
    byteBuffer.position(position << 2);
    byteBuffer.compact();
    byteBuffer.clear();
    position = limit - position;
    limit = capacity;
    mark = UNSET_MARK;
    return this;
}
