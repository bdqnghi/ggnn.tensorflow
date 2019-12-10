/**
 * Packs a single image. Order is defined externally.
 */
public Rect insert(Rect rect, FreeRectChoiceHeuristic method) {
    Rect newNode = scoreRect(rect, method);
    if (newNode.height == 0)
        return null;
    int numRectanglesToProcess = freeRectangles.size;
    for (int i = 0; i < numRectanglesToProcess; ++i) {
        if (splitFreeNode(freeRectangles.get(i), newNode)) {
            freeRectangles.removeIndex(i);
            --i;
            --numRectanglesToProcess;
        }
    }
    pruneFreeList();
    Rect bestNode = new Rect();
    bestNode.set(rect);
    bestNode.score1 = newNode.score1;
    bestNode.score2 = newNode.score2;
    bestNode.x = newNode.x;
    bestNode.y = newNode.y;
    bestNode.width = newNode.width;
    bestNode.height = newNode.height;
    bestNode.rotated = newNode.rotated;
    usedRectangles.add(bestNode);
    return bestNode;
}
