private Rect findPositionForNewNodeContactPoint(int width, int height, int rotatedWidth, int rotatedHeight, boolean rotate) {
    Rect bestNode = new Rect();
    // best contact score
    bestNode.score1 = -1;
    for (int i = 0; i < freeRectangles.size; i++) {
        // Try to place the rectangle in upright (non-rotated) orientation.
        if (freeRectangles.get(i).width >= width && freeRectangles.get(i).height >= height) {
            int score = contactPointScoreNode(freeRectangles.get(i).x, freeRectangles.get(i).y, width, height);
            if (score > bestNode.score1) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = width;
                bestNode.height = height;
                bestNode.score1 = score;
                bestNode.rotated = false;
            }
        }
        if (rotate && freeRectangles.get(i).width >= rotatedWidth && freeRectangles.get(i).height >= rotatedHeight) {
            // This was width,height -- bug fixed?
            int score = contactPointScoreNode(freeRectangles.get(i).x, freeRectangles.get(i).y, rotatedWidth, rotatedHeight);
            if (score > bestNode.score1) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = rotatedWidth;
                bestNode.height = rotatedHeight;
                bestNode.score1 = score;
                bestNode.rotated = true;
            }
        }
    }
    return bestNode;
}
