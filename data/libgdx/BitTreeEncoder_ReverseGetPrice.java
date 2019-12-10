public static int ReverseGetPrice(short[] Models, int startIndex, int NumBitLevels, int symbol) {
    int price = 0;
    int m = 1;
    for (int i = NumBitLevels; i != 0; i--) {
        int bit = symbol & 1;
        symbol >>>= 1;
        price += Encoder.GetPrice(Models[startIndex + m], bit);
        m = (m << 1) | bit;
    }
    return price;
}
