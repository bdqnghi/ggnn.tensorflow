public void MovePos() throws IOException {
    _pos++;
    if (_pos > _posLimit) {
        int pointerToPostion = _bufferOffset + _pos;
        if (pointerToPostion > _pointerToLastSafePosition)
            MoveBlock();
        ReadBlock();
    }
}
