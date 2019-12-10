@Override
public DoubleBuffer slice() {
    byteBuffer.limit(limit << 3);
    byteBuffer.position(position << 3);
    DoubleBuffer result = new DoubleToByteBufferAdapter(byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
