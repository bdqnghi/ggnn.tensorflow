boolean SetDictionarySize(int dictionarySize) {
    if (dictionarySize < 0)
        return false;
    if (m_DictionarySize != dictionarySize) {
        m_DictionarySize = dictionarySize;
        m_DictionarySizeCheck = Math.max(m_DictionarySize, 1);
        m_OutWindow.Create(Math.max(m_DictionarySizeCheck, (1 << 12)));
    }
    return true;
}
