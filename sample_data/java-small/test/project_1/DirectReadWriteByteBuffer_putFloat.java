public ByteBuffer putFloat(int index, float value) {
    return putInt(index, Numbers.floatToIntBits(value));
}
