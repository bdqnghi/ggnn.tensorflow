public void Update(byte[] data) {
    int size = data.length;
    for (int i = 0; i < size; i++) _value = Table[(_value ^ data[i]) & 0xFF] ^ (_value >>> 8);
}
