@Override
public CharBuffer asCharBuffer() {
    return CharToByteBufferAdapter.wrap(this);
}
