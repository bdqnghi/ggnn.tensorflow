@Override
public CharBuffer slice() {
    byteBuffer.limit(limit << 1);
    byteBuffer.position(position << 1);
    CharBuffer result = new CharToByteBufferAdapter(byteBuffer.slice());
    byteBuffer.clear();
    return result;
}
