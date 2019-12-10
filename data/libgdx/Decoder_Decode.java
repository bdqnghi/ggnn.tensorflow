public int Decode(com.badlogic.gdx.utils.compression.rangecoder.Decoder rangeDecoder, int posState) throws IOException {
    if (rangeDecoder.DecodeBit(m_Choice, 0) == 0)
        return m_LowCoder[posState].Decode(rangeDecoder);
    int symbol = Base.kNumLowLenSymbols;
    if (rangeDecoder.DecodeBit(m_Choice, 1) == 0)
        symbol += m_MidCoder[posState].Decode(rangeDecoder);
    else
        symbol += Base.kNumMidLenSymbols + m_HighCoder.Decode(rangeDecoder);
    return symbol;
}
