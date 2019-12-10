void NormalizeLinks(int[] items, int numItems, int subValue) {
    for (int i = 0; i < numItems; i++) {
        int value = items[i];
        if (value <= subValue)
            value = kEmptyHashValue;
        else
            value -= subValue;
        items[i] = value;
    }
}
