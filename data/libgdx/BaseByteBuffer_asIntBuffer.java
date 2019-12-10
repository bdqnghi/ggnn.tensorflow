@Override
public IntBuffer asIntBuffer() {
    return IntToByteBufferAdapter.wrap(this);
}
