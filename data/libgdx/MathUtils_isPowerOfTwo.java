static public boolean isPowerOfTwo(int value) {
    return value != 0 && (value & value - 1) == 0;
}
