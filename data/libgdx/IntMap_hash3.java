private int hash3(int h) {
    h *= PRIME3;
    return (h ^ h >>> hashShift) & mask;
}
