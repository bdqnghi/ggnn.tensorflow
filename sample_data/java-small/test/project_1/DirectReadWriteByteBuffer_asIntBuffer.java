public IntBuffer asIntBuffer() {
    return order() == ByteOrder.nativeOrder() ? DirectReadWriteIntBufferAdapter.wrap(this) : super.asIntBuffer();
}
