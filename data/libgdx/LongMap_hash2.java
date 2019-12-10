private int hash2(long h) {
    h *= PRIME2;
    return (int) ((h ^ h >>> hashShift) & mask);
}
