public void Create(int numPosBits, int numPrevBits) {
    if (m_Coders != null && m_NumPrevBits == numPrevBits && m_NumPosBits == numPosBits)
        return;
    m_NumPosBits = numPosBits;
    m_PosMask = (1 << numPosBits) - 1;
    m_NumPrevBits = numPrevBits;
    int numStates = 1 << (m_NumPrevBits + m_NumPosBits);
    m_Coders = new Decoder2[numStates];
    for (int i = 0; i < numStates; i++) m_Coders[i] = new Decoder2();
}
