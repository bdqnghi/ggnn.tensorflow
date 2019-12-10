private int hash3(long h) {
    h *= PRIME3;
    return (int) ((h ^ h >>> hashShift) & mask);
}
