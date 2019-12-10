Decoder2 GetDecoder(int pos, byte prevByte) {
    return m_Coders[((pos & m_PosMask) << m_NumPrevBits) + ((prevByte & 0xFF) >>> (8 - m_NumPrevBits))];
}
