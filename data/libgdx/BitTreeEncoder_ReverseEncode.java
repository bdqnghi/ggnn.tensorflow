public static void ReverseEncode(short[] Models, int startIndex, Encoder rangeEncoder, int NumBitLevels, int symbol) throws IOException {
    int m = 1;
    for (int i = 0; i < NumBitLevels; i++) {
        int bit = symbol & 1;
        rangeEncoder.Encode(Models, startIndex + m, bit);
        m = (m << 1) | bit;
        symbol >>= 1;
    }
}
