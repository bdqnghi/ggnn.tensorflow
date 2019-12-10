@Override
public IntBuffer slice() {
    byteBuffer.limit(limit << 2);
    byteBuffer.position(position << 2);
    IntBuffer result = new IntToByteBufferAdapter(byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
