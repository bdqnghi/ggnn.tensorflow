public int GetPrice(int symbol) {
    int price = 0;
    int m = 1;
    for (int bitIndex = NumBitLevels; bitIndex != 0; ) {
        bitIndex--;
        int bit = (symbol >>> bitIndex) & 1;
        price += Encoder.GetPrice(Models[m], bit);
        m = (m << 1) + bit;
    }
    return price;
}
