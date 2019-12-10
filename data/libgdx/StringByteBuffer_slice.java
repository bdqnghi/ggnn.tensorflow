@Override
public ByteBuffer slice() {
    // TODO(jgw): I don't think this is right, but might work for our purposes.
    StringByteBuffer slice = new StringByteBuffer(s, position, limit);
    slice.order = order;
    return slice;
}
