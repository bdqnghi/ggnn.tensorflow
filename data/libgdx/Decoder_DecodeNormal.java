public byte DecodeNormal(com.badlogic.gdx.utils.compression.rangecoder.Decoder rangeDecoder) throws IOException {
    int symbol = 1;
    do symbol = (symbol << 1) | rangeDecoder.DecodeBit(m_Decoders, symbol); while (symbol < 0x100);
    return (byte) symbol;
}
