public boolean SetDecoderProperties(byte[] properties) {
    if (properties.length < 5)
        return false;
    int val = properties[0] & 0xFF;
    int lc = val % 9;
    int remainder = val / 9;
    int lp = remainder % 5;
    int pb = remainder / 5;
    int dictionarySize = 0;
    for (int i = 0; i < 4; i++) dictionarySize += ((int) (properties[1 + i]) & 0xFF) << (i * 8);
    if (!SetLcLpPb(lc, lp, pb))
        return false;
    return SetDictionarySize(dictionarySize);
}
