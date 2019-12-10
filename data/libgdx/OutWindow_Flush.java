public void Flush() throws IOException {
    int size = _pos - _streamPos;
    if (size == 0)
        return;
    _stream.write(_buffer, _streamPos, size);
    if (_pos >= _windowSize)
        _pos = 0;
    _streamPos = _pos;
}
