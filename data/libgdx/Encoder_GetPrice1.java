static public int GetPrice1(int Prob) {
    return ProbPrices[(kBitModelTotal - Prob) >>> kNumMoveReducingBits];
}
