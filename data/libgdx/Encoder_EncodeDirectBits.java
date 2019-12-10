public void EncodeDirectBits(int v, int numTotalBits) throws IOException {
    for (int i = numTotalBits - 1; i >= 0; i--) {
        Range >>>= 1;
        if (((v >>> i) & 1) == 1)
            Low += Range;
        if ((Range & Encoder.kTopMask) == 0) {
            Range <<= 8;
            ShiftLow();
        }
    }
}
