@Override
public IntBuffer slice() {
    byteBuffer.limit(limit << 2);
    byteBuffer.position(position << 2);
    IntBuffer result = new DirectReadOnlyIntBufferAdapter((DirectByteBuffer) byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
