public IntBuffer asIntBuffer() {
    return order() == ByteOrder.nativeOrder() ? DirectReadOnlyIntBufferAdapter.wrap(this) : super.asIntBuffer();
}
