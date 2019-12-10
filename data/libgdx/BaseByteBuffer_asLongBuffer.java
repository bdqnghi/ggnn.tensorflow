@Override
public LongBuffer asLongBuffer() {
    return LongToByteBufferAdapter.wrap(this);
}
