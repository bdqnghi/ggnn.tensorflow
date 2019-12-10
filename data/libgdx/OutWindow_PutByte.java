public void PutByte(byte b) throws IOException {
    _buffer[_pos++] = b;
    if (_pos >= _windowSize)
        Flush();
}
