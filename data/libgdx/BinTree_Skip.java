public void Skip(int num) throws IOException {
    do {
        int lenLimit;
        if (_pos + _matchMaxLen <= _streamPos)
            lenLimit = _matchMaxLen;
        else {
            lenLimit = _streamPos - _pos;
            if (lenLimit < kMinMatchCheck) {
                MovePos();
                continue;
            }
        }
        int matchMinPos = (_pos > _cyclicBufferSize) ? (_pos - _cyclicBufferSize) : 0;
        int cur = _bufferOffset + _pos;
        int hashValue;
        if (HASH_ARRAY) {
            int temp = CrcTable[_bufferBase[cur] & 0xFF] ^ (_bufferBase[cur + 1] & 0xFF);
            int hash2Value = temp & (kHash2Size - 1);
            _hash[hash2Value] = _pos;
            temp ^= ((int) (_bufferBase[cur + 2] & 0xFF) << 8);
            int hash3Value = temp & (kHash3Size - 1);
            _hash[kHash3Offset + hash3Value] = _pos;
            hashValue = (temp ^ (CrcTable[_bufferBase[cur + 3] & 0xFF] << 5)) & _hashMask;
        } else
            hashValue = ((_bufferBase[cur] & 0xFF) ^ ((int) (_bufferBase[cur + 1] & 0xFF) << 8));
        int curMatch = _hash[kFixHashSize + hashValue];
        _hash[kFixHashSize + hashValue] = _pos;
        int ptr0 = (_cyclicBufferPos << 1) + 1;
        int ptr1 = (_cyclicBufferPos << 1);
        int len0, len1;
        len0 = len1 = kNumHashDirectBytes;
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
                if (len == lenLimit) {
                    _son[ptr1] = _son[cyclicPos];
                    _son[ptr0] = _son[cyclicPos + 1];
                    break;
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
    } while (--num != 0);
}
