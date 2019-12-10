public void ReduceOffsets(int subValue) {
    _bufferOffset += subValue;
    _posLimit -= subValue;
    _pos -= subValue;
    _streamPos -= subValue;
}
