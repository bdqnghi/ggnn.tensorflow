public void Encode(Encoder rangeEncoder, int symbol) throws IOException {
    int m = 1;
    for (int bitIndex = NumBitLevels; bitIndex != 0; ) {
        bitIndex--;
        int bit = (symbol >>> bitIndex) & 1;
        rangeEncoder.Encode(Models, m, bit);
        m = (m << 1) | bit;
    }
}
