@Override
public ShortBuffer asShortBuffer() {
    return ShortToByteBufferAdapter.wrap(this);
}
