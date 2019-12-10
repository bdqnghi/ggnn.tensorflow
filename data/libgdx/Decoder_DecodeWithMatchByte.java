public byte DecodeWithMatchByte(com.badlogic.gdx.utils.compression.rangecoder.Decoder rangeDecoder, byte matchByte) throws IOException {
    int symbol = 1;
    do {
        int matchBit = (matchByte >> 7) & 1;
        matchByte <<= 1;
        int bit = rangeDecoder.DecodeBit(m_Decoders, ((1 + matchBit) << 8) + symbol);
        symbol = (symbol << 1) | bit;
        if (matchBit != bit) {
            while (symbol < 0x100) symbol = (symbol << 1) | rangeDecoder.DecodeBit(m_Decoders, symbol);
            break;
        }
    } while (symbol < 0x100);
    return (byte) symbol;
}
