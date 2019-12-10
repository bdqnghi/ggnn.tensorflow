public void remove() {
    if (currentIndex < 0)
        throw new IllegalStateException("next must be called before remove.");
    if (currentIndex >= map.capacity) {
        map.removeStashIndex(currentIndex);
        nextIndex = currentIndex - 1;
        findNextIndex();
    } else {
        map.keyTable[currentIndex] = null;
        map.valueTable[currentIndex] = null;
    }
    currentIndex = -1;
    map.size--;
}
