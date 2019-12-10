public int GetMatches(int[] distances) throws IOException {
    int lenLimit;
    if (_pos + _matchMaxLen <= _streamPos)
        lenLimit = _matchMaxLen;
    else {
        lenLimit = _streamPos - _pos;
        if (lenLimit < kMinMatchCheck) {
            MovePos();
            return 0;
        }
    }
    int offset = 0;
    int matchMinPos = (_pos > _cyclicBufferSize) ? (_pos - _cyclicBufferSize) : 0;
    int cur = _bufferOffset + _pos;
    // to avoid items for len < hashSize;
    int maxLen = kStartMaxLen;
    int hashValue, hash2Value = 0, hash3Value = 0;
    if (HASH_ARRAY) {
        int temp = CrcTable[_bufferBase[cur] & 0xFF] ^ (_bufferBase[cur + 1] & 0xFF);
        hash2Value = temp & (kHash2Size - 1);
        temp ^= ((int) (_bufferBase[cur + 2] & 0xFF) << 8);
        hash3Value = temp & (kHash3Size - 1);
        hashValue = (temp ^ (CrcTable[_bufferBase[cur + 3] & 0xFF] << 5)) & _hashMask;
    } else
        hashValue = ((_bufferBase[cur] & 0xFF) ^ ((int) (_bufferBase[cur + 1] & 0xFF) << 8));
    int curMatch = _hash[kFixHashSize + hashValue];
    if (HASH_ARRAY) {
        int curMatch2 = _hash[hash2Value];
        int curMatch3 = _hash[kHash3Offset + hash3Value];
        _hash[hash2Value] = _pos;
        _hash[kHash3Offset + hash3Value] = _pos;
        if (curMatch2 > matchMinPos)
            if (_bufferBase[_bufferOffset + curMatch2] == _bufferBase[cur]) {
                distances[offset++] = maxLen = 2;
                distances[offset++] = _pos - curMatch2 - 1;
            }
        if (curMatch3 > matchMinPos)
            if (_bufferBase[_bufferOffset + curMatch3] == _bufferBase[cur]) {
                if (curMatch3 == curMatch2)
                    offset -= 2;
                distances[offset++] = maxLen = 3;
                distances[offset++] = _pos - curMatch3 - 1;
                curMatch2 = curMatch3;
            }
        if (offset != 0 && curMatch2 == curMatch) {
            offset -= 2;
            maxLen = kStartMaxLen;
        }
    }
    _hash[kFixHashSize + hashValue] = _pos;
    int ptr0 = (_cyclicBufferPos << 1) + 1;
    int ptr1 = (_cyclicBufferPos << 1);
    int len0, len1;
    len0 = len1 = kNumHashDirectBytes;
    if (kNumHashDirectBytes != 0) {
        if (curMatch > matchMinPos) {
            if (_bufferBase[_bufferOffset + curMatch + kNumHashDirectBytes] != _bufferBase[cur + kNumHashDirectBytes]) {
                distances[offset++] = maxLen = kNumHashDirectBytes;
                distances[offset++] = _pos - curMatch - 1;
            }
        }
    }
    int count = _cutValue;
    while (true) {
        if (curMatch <= matchMinPos || count-- == 0) {
            _son[ptr0] = _son[ptr1] = kEmptyHashValue;
            break;
        }
        int delta = _pos - curMatch;
        int cyclicPos = ((delta <= _cyclicBufferPos) ? (_cyclicBufferPos - delta) : (_cyclicBufferPos - delta + _cyclicBufferSize)) << 1;
        int pby1 = _bufferOffset + curMatch;
        int len = Math.min(len0, len1);
        if (_bufferBase[pby1 + len] == _bufferBase[cur + len]) {
            while (++len != lenLimit) if (_bufferBase[pby1 + len] != _bufferBase[cur + len])
                break;
            if (maxLen < len) {
                distances[offset++] = maxLen = len;
                distances[offset++] = delta - 1;
                if (len == lenLimit) {
                    _son[ptr1] = _son[cyclicPos];
                    _son[ptr0] = _son[cyclicPos + 1];
                    break;
                }
            }
        }
        if ((_bufferBase[pby1 + len] & 0xFF) < (_bufferBase[cur + len] & 0xFF)) {
            _son[ptr1] = curMatch;
            ptr1 = cyclicPos + 1;
            curMatch = _son[ptr1];
            len1 = len;
        } else {
            _son[ptr0] = curMatch;
            ptr0 = cyclicPos;
            curMatch = _son[ptr0];
            len0 = len;
        }
    }
    MovePos();
    return offset;
}
