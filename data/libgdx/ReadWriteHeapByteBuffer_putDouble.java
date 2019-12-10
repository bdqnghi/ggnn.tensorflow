public ByteBuffer putDouble(int index, double value) {
    return putLong(index, Numbers.doubleToRawLongBits(value));
}
