public void Init() throws IOException {
    super.Init();
    for (int i = 0; i < _hashSizeSum; i++) _hash[i] = kEmptyHashValue;
    _cyclicBufferPos = 0;
    ReduceOffsets(-1);
}
