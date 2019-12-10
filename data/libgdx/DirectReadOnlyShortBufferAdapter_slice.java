@Override
public ShortBuffer slice() {
    byteBuffer.limit(limit << 1);
    byteBuffer.position(position << 1);
    ShortBuffer result = new DirectReadOnlyShortBufferAdapter((DirectByteBuffer) byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
