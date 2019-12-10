public ShortBuffer asShortBuffer() {
    return order() == ByteOrder.nativeOrder() ? DirectReadOnlyShortBufferAdapter.wrap(this) : super.asShortBuffer();
}
