public void ReadBlock() throws IOException {
    if (_streamEndWasReached)
        return;
    while (true) {
        int size = (0 - _bufferOffset) + _blockSize - _streamPos;
        if (size == 0)
            return;
        int numReadBytes = _stream.read(_bufferBase, _bufferOffset + _streamPos, size);
        if (numReadBytes == -1) {
            _posLimit = _streamPos;
            int pointerToPostion = _bufferOffset + _posLimit;
            if (pointerToPostion > _pointerToLastSafePosition)
                _posLimit = _pointerToLastSafePosition - _bufferOffset;
            _streamEndWasReached = true;
            return;
        }
        _streamPos += numReadBytes;
        if (_streamPos >= _pos + _keepSizeAfter)
            _posLimit = _streamPos - _keepSizeAfter;
    }
}
