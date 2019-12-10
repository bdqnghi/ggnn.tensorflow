public void MoveBlock() {
    int offset = _bufferOffset + _pos - _keepSizeBefore;
    // we need one additional byte, since MovePos moves on 1 byte.
    if (offset > 0)
        offset--;
    int numBytes = _bufferOffset + _streamPos - offset;
    // check negative offset ????
    for (int i = 0; i < numBytes; i++) _bufferBase[i] = _bufferBase[offset + i];
    _bufferOffset -= offset;
}
