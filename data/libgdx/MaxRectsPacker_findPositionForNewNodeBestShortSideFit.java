private Rect findPositionForNewNodeBestShortSideFit(int width, int height, int rotatedWidth, int rotatedHeight, boolean rotate) {
    Rect bestNode = new Rect();
    bestNode.score1 = Integer.MAX_VALUE;
    for (int i = 0; i < freeRectangles.size; i++) {
        // Try to place the rectangle in upright (non-rotated) orientation.
        if (freeRectangles.get(i).width >= width && freeRectangles.get(i).height >= height) {
            int leftoverHoriz = Math.abs(freeRectangles.get(i).width - width);
            int leftoverVert = Math.abs(freeRectangles.get(i).height - height);
            int shortSideFit = Math.min(leftoverHoriz, leftoverVert);
            int longSideFit = Math.max(leftoverHoriz, leftoverVert);
            if (shortSideFit < bestNode.score1 || (shortSideFit == bestNode.score1 && longSideFit < bestNode.score2)) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = width;
                bestNode.height = height;
                bestNode.score1 = shortSideFit;
                bestNode.score2 = longSideFit;
                bestNode.rotated = false;
            }
        }
        if (rotate && freeRectangles.get(i).width >= rotatedWidth && freeRectangles.get(i).height >= rotatedHeight) {
            int flippedLeftoverHoriz = Math.abs(freeRectangles.get(i).width - rotatedWidth);
            int flippedLeftoverVert = Math.abs(freeRectangles.get(i).height - rotatedHeight);
            int flippedShortSideFit = Math.min(flippedLeftoverHoriz, flippedLeftoverVert);
            int flippedLongSideFit = Math.max(flippedLeftoverHoriz, flippedLeftoverVert);
            if (flippedShortSideFit < bestNode.score1 || (flippedShortSideFit == bestNode.score1 && flippedLongSideFit < bestNode.score2)) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = rotatedWidth;
                bestNode.height = rotatedHeight;
                bestNode.score1 = flippedShortSideFit;
                bestNode.score2 = flippedLongSideFit;
                bestNode.rotated = true;
            }
        }
    }
    return bestNode;
}
