public void Encode(short[] probs, int index, int symbol) throws IOException {
    int prob = probs[index];
    int newBound = (Range >>> kNumBitModelTotalBits) * prob;
    if (symbol == 0) {
        Range = newBound;
        probs[index] = (short) (prob + ((kBitModelTotal - prob) >>> kNumMoveBits));
    } else {
        Low += (newBound & 0xFFFFFFFFL);
        Range -= newBound;
        probs[index] = (short) (prob - ((prob) >>> kNumMoveBits));
    }
    if ((Range & kTopMask) == 0) {
        Range <<= 8;
        ShiftLow();
    }
}
