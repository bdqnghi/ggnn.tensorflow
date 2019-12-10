public void Create(int windowSize) {
    if (_buffer == null || _windowSize != windowSize)
        _buffer = new byte[windowSize];
    _windowSize = windowSize;
    _pos = 0;
    _streamPos = 0;
}
