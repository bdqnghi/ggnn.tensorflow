public void reset() {
    currentIndex = INDEX_ILLEGAL;
    nextIndex = INDEX_ZERO;
    if (set.hasZeroValue)
        hasNext = true;
    else
        findNextIndex();
}
