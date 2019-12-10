@Override
public LongBuffer slice() {
    byteBuffer.limit(limit << 3);
    byteBuffer.position(position << 3);
    LongBuffer result = new LongToByteBufferAdapter(byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
