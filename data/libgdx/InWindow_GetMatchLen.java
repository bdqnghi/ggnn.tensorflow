// index + limit have not to exceed _keepSizeAfter;
public int GetMatchLen(int index, int distance, int limit) {
    if (_streamEndWasReached)
        if ((_pos + index) + limit > _streamPos)
            limit = _streamPos - (_pos + index);
    distance++;
    // Byte *pby = _buffer + (size_t)_pos + index;
    int pby = _bufferOffset + _pos + index;
    int i;
    for (i = 0; i < limit && _bufferBase[pby + i] == _bufferBase[pby + i - distance]; i++) ;
    return i;
}
