private Rect findPositionForNewNodeBottomLeft(int width, int height, int rotatedWidth, int rotatedHeight, boolean rotate) {
    Rect bestNode = new Rect();
    // best y, score2 is best x
    bestNode.score1 = Integer.MAX_VALUE;
    for (int i = 0; i < freeRectangles.size; i++) {
        // Try to place the rectangle in upright (non-rotated) orientation.
        if (freeRectangles.get(i).width >= width && freeRectangles.get(i).height >= height) {
            int topSideY = freeRectangles.get(i).y + height;
            if (topSideY < bestNode.score1 || (topSideY == bestNode.score1 && freeRectangles.get(i).x < bestNode.score2)) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = width;
                bestNode.height = height;
                bestNode.score1 = topSideY;
                bestNode.score2 = freeRectangles.get(i).x;
                bestNode.rotated = false;
            }
        }
        if (rotate && freeRectangles.get(i).width >= rotatedWidth && freeRectangles.get(i).height >= rotatedHeight) {
            int topSideY = freeRectangles.get(i).y + rotatedHeight;
            if (topSideY < bestNode.score1 || (topSideY == bestNode.score1 && freeRectangles.get(i).x < bestNode.score2)) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = rotatedWidth;
                bestNode.height = rotatedHeight;
                bestNode.score1 = topSideY;
                bestNode.score2 = freeRectangles.get(i).x;
                bestNode.rotated = true;
            }
        }
    }
    return bestNode;
}
