@Override
public FloatBuffer slice() {
    byteBuffer.limit(limit << 2);
    byteBuffer.position(position << 2);
    FloatBuffer result = new DirectReadWriteFloatBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
