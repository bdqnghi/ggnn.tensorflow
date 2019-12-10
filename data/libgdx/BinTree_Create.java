public boolean Create(int historySize, int keepAddBufferBefore, int matchMaxLen, int keepAddBufferAfter) {
    if (historySize > kMaxValForNormalize - 256)
        return false;
    _cutValue = 16 + (matchMaxLen >> 1);
    int windowReservSize = (historySize + keepAddBufferBefore + matchMaxLen + keepAddBufferAfter) / 2 + 256;
    super.Create(historySize + keepAddBufferBefore, matchMaxLen + keepAddBufferAfter, windowReservSize);
    _matchMaxLen = matchMaxLen;
    int cyclicBufferSize = historySize + 1;
    if (_cyclicBufferSize != cyclicBufferSize)
        _son = new int[(_cyclicBufferSize = cyclicBufferSize) * 2];
    int hs = kBT2HashSize;
    if (HASH_ARRAY) {
        hs = historySize - 1;
        hs |= (hs >> 1);
        hs |= (hs >> 2);
        hs |= (hs >> 4);
        hs |= (hs >> 8);
        hs >>= 1;
        hs |= 0xFFFF;
        if (hs > (1 << 24))
            hs >>= 1;
        _hashMask = hs;
        hs++;
        hs += kFixHashSize;
    }
    if (hs != _hashSizeSum)
        _hash = new int[_hashSizeSum = hs];
    return true;
}
