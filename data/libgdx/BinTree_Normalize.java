void Normalize() {
    int subValue = _pos - _cyclicBufferSize;
    NormalizeLinks(_son, _cyclicBufferSize * 2, subValue);
    NormalizeLinks(_hash, _hashSizeSum, subValue);
    ReduceOffsets(subValue);
}
