public void CopyBlock(int distance, int len) throws IOException {
    int pos = _pos - distance - 1;
    if (pos < 0)
        pos += _windowSize;
    for (; len != 0; len--) {
        if (pos >= _windowSize)
            pos = 0;
        _buffer[_pos++] = _buffer[pos++];
        if (_pos >= _windowSize)
            Flush();
    }
}
