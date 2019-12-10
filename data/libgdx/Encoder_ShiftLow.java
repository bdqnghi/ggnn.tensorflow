public void ShiftLow() throws IOException {
    int LowHi = (int) (Low >>> 32);
    if (LowHi != 0 || Low < 0xFF000000L) {
        _position += _cacheSize;
        int temp = _cache;
        do {
            Stream.write(temp + LowHi);
            temp = 0xFF;
        } while (--_cacheSize != 0);
        _cache = (((int) Low) >>> 24);
    }
    _cacheSize++;
    Low = (Low & 0xFFFFFF) << 8;
}
