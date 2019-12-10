public void UpdateByte(int b) {
    _value = Table[(_value ^ b) & 0xFF] ^ (_value >>> 8);
}
