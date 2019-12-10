public void Create(int keepSizeBefore, int keepSizeAfter, int keepSizeReserv) {
    _keepSizeBefore = keepSizeBefore;
    _keepSizeAfter = keepSizeAfter;
    int blockSize = keepSizeBefore + keepSizeAfter + keepSizeReserv;
    if (_bufferBase == null || _blockSize != blockSize) {
        Free();
        _blockSize = blockSize;
        _bufferBase = new byte[_blockSize];
    }
    _pointerToLastSafePosition = _blockSize - keepSizeAfter;
}
