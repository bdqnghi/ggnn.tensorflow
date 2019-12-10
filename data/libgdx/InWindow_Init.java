public void Init() throws IOException {
    _bufferOffset = 0;
    _pos = 0;
    _streamPos = 0;
    _streamEndWasReached = false;
    ReadBlock();
}
