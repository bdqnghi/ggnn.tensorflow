@Override
public DoubleBuffer asDoubleBuffer() {
    return DoubleToByteBufferAdapter.wrap(this);
}
