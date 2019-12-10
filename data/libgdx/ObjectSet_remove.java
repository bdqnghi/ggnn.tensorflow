public void remove() {
    if (currentIndex < 0)
        throw new IllegalStateException("next must be called before remove.");
    if (currentIndex >= set.capacity) {
        set.removeStashIndex(currentIndex);
        nextIndex = currentIndex - 1;
        findNextIndex();
    } else {
        set.keyTable[currentIndex] = null;
    }
    currentIndex = -1;
    set.size--;
}
