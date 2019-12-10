private void placeRect(Rect node) {
    int numRectanglesToProcess = freeRectangles.size;
    for (int i = 0; i < numRectanglesToProcess; i++) {
        if (splitFreeNode(freeRectangles.get(i), node)) {
            freeRectangles.removeIndex(i);
            --i;
            --numRectanglesToProcess;
        }
    }
    pruneFreeList();
    usedRectangles.add(node);
}
