public ShortBuffer asShortBuffer() {
    return order() == ByteOrder.nativeOrder() ? DirectReadWriteShortBufferAdapter.wrap(this) : super.asShortBuffer();
}
