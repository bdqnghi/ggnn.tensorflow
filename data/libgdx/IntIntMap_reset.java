public void reset() {
    currentIndex = INDEX_ILLEGAL;
    nextIndex = INDEX_ZERO;
    if (map.hasZeroValue)
        hasNext = true;
    else
        findNextIndex();
}
