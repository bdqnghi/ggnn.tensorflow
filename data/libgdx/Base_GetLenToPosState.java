public static final int GetLenToPosState(int len) {
    len -= kMatchMinLen;
    if (len < kNumLenToPosStates)
        return len;
    return (int) (kNumLenToPosStates - 1);
}
