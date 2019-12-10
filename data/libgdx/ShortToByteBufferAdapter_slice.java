@Override
public ShortBuffer slice() {
    byteBuffer.limit(limit << 1);
    byteBuffer.position(position << 1);
    ShortBuffer result = new ShortToByteBufferAdapter(byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
