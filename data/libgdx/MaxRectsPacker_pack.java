/**
 * For each rectangle, packs each one then chooses the best and packs that. Slow!
 */
public Page pack(Array<Rect> rects, FreeRectChoiceHeuristic method) {
    rects = new Array(rects);
    while (rects.size > 0) {
        int bestRectIndex = -1;
        Rect bestNode = new Rect();
        bestNode.score1 = Integer.MAX_VALUE;
        bestNode.score2 = Integer.MAX_VALUE;
        // Find the next rectangle that packs best.
        for (int i = 0; i < rects.size; i++) {
            Rect newNode = scoreRect(rects.get(i), method);
            if (newNode.score1 < bestNode.score1 || (newNode.score1 == bestNode.score1 && newNode.score2 < bestNode.score2)) {
                bestNode.set(rects.get(i));
                bestNode.score1 = newNode.score1;
                bestNode.score2 = newNode.score2;
                bestNode.x = newNode.x;
                bestNode.y = newNode.y;
                bestNode.width = newNode.width;
                bestNode.height = newNode.height;
                bestNode.rotated = newNode.rotated;
                bestRectIndex = i;
            }
        }
        if (bestRectIndex == -1)
            break;
        placeRect(bestNode);
        rects.removeIndex(bestRectIndex);
    }
    Page result = getResult();
    result.remainingRects = rects;
    return result;
}
