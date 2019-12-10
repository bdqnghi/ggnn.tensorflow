public void remove() {
    if (currentIndex == INDEX_ZERO && set.hasZeroValue) {
        set.hasZeroValue = false;
    } else if (currentIndex < 0) {
        throw new IllegalStateException("next must be called before remove.");
    } else if (currentIndex >= set.capacity) {
        set.removeStashIndex(currentIndex);
        nextIndex = currentIndex - 1;
        findNextIndex();
    } else {
        set.keyTable[currentIndex] = EMPTY;
    }
    currentIndex = INDEX_ILLEGAL;
    set.size--;
}
