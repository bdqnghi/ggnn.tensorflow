static public int GetPrice0(int Prob) {
    return ProbPrices[Prob >>> kNumMoveReducingBits];
}
