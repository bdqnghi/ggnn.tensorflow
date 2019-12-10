public int Decode(Decoder rangeDecoder) throws java.io.IOException {
    int m = 1;
    for (int bitIndex = NumBitLevels; bitIndex != 0; bitIndex--) m = (m << 1) + rangeDecoder.DecodeBit(Models, m);
    return m - (1 << NumBitLevels);
}
