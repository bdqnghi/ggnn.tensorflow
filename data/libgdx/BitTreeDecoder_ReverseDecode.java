public static int ReverseDecode(short[] Models, int startIndex, Decoder rangeDecoder, int NumBitLevels) throws java.io.IOException {
    int m = 1;
    int symbol = 0;
    for (int bitIndex = 0; bitIndex < NumBitLevels; bitIndex++) {
        int bit = rangeDecoder.DecodeBit(Models, startIndex + m);
        m <<= 1;
        m += bit;
        symbol |= (bit << bitIndex);
    }
    return symbol;
}
