void removeStashIndex(int index) {
    // If the removed location was not last, move the last tuple to the removed location.
    stashSize--;
    int lastIndex = capacity + stashSize;
    if (index < lastIndex) {
        keyTable[index] = keyTable[lastIndex];
        valueTable[index] = valueTable[lastIndex];
        valueTable[lastIndex] = null;
    } else
        valueTable[index] = null;
}
