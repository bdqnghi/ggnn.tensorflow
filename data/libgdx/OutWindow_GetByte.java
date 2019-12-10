public byte GetByte(int distance) {
    int pos = _pos - distance - 1;
    if (pos < 0)
        pos += _windowSize;
    return _buffer[pos];
}
