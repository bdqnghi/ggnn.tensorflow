public void MovePos() throws IOException {
    if (++_cyclicBufferPos >= _cyclicBufferSize)
        _cyclicBufferPos = 0;
    super.MovePos();
    if (_pos == kMaxValForNormalize)
        Normalize();
}
