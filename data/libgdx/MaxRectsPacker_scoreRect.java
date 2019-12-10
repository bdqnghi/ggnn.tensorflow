private Rect scoreRect(Rect rect, FreeRectChoiceHeuristic method) {
    int width = rect.width;
    int height = rect.height;
    int rotatedWidth = height - settings.paddingY + settings.paddingX;
    int rotatedHeight = width - settings.paddingX + settings.paddingY;
    boolean rotate = rect.canRotate && settings.rotation;
    Rect newNode = null;
    switch(method) {
        case BestShortSideFit:
            newNode = findPositionForNewNodeBestShortSideFit(width, height, rotatedWidth, rotatedHeight, rotate);
            break;
        case BottomLeftRule:
            newNode = findPositionForNewNodeBottomLeft(width, height, rotatedWidth, rotatedHeight, rotate);
            break;
        case ContactPointRule:
            newNode = findPositionForNewNodeContactPoint(width, height, rotatedWidth, rotatedHeight, rotate);
            // Reverse since we are minimizing, but for contact point score bigger is better.
            newNode.score1 = -newNode.score1;
            break;
        case BestLongSideFit:
            newNode = findPositionForNewNodeBestLongSideFit(width, height, rotatedWidth, rotatedHeight, rotate);
            break;
        case BestAreaFit:
            newNode = findPositionForNewNodeBestAreaFit(width, height, rotatedWidth, rotatedHeight, rotate);
            break;
    }
    // Cannot fit the current rectangle.
    if (newNode.height == 0) {
        newNode.score1 = Integer.MAX_VALUE;
        newNode.score2 = Integer.MAX_VALUE;
    }
    return newNode;
}
