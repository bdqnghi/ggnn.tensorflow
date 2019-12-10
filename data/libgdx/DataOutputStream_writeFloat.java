public void writeFloat(float v) throws IOException {
    writeInt(Numbers.floatToIntBits(v));
}
