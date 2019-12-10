private int hash2(int h) {
    h *= PRIME2;
    return (h ^ h >>> hashShift) & mask;
}
