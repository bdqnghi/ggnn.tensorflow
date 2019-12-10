boolean SetLcLpPb(int lc, int lp, int pb) {
    if (lc > Base.kNumLitContextBitsMax || lp > 4 || pb > Base.kNumPosStatesBitsMax)
        return false;
    m_LiteralDecoder.Create(lp, lc);
    int numPosStates = 1 << pb;
    m_LenDecoder.Create(numPosStates);
    m_RepLenDecoder.Create(numPosStates);
    m_PosStateMask = numPosStates - 1;
    return true;
}
