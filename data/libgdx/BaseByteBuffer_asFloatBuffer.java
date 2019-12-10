@Override
public FloatBuffer asFloatBuffer() {
    return FloatToByteBufferAdapter.wrap(this);
}
