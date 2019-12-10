@Override
public ShortBuffer slice() {
    byteBuffer.limit(limit << 1);
    byteBuffer.position(position << 1);
    ShortBuffer result = new DirectReadWriteShortBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
