private void pruneFreeList() {
    // Go through each pair and remove any rectangle that is redundant.
    for (int i = 0; i < freeRectangles.size; i++) for (int j = i + 1; j < freeRectangles.size; ++j) {
        if (isContainedIn(freeRectangles.get(i), freeRectangles.get(j))) {
            freeRectangles.removeIndex(i);
            --i;
            break;
        }
        if (isContainedIn(freeRectangles.get(j), freeRectangles.get(i))) {
            freeRectangles.removeIndex(j);
            --j;
        }
    }
}
