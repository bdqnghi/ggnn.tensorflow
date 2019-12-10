private Rect findPositionForNewNodeBestLongSideFit(int width, int height, int rotatedWidth, int rotatedHeight, boolean rotate) {
    Rect bestNode = new Rect();
    bestNode.score2 = Integer.MAX_VALUE;
    for (int i = 0; i < freeRectangles.size; i++) {
        // Try to place the rectangle in upright (non-rotated) orientation.
        if (freeRectangles.get(i).width >= width && freeRectangles.get(i).height >= height) {
            int leftoverHoriz = Math.abs(freeRectangles.get(i).width - width);
            int leftoverVert = Math.abs(freeRectangles.get(i).height - height);
            int shortSideFit = Math.min(leftoverHoriz, leftoverVert);
            int longSideFit = Math.max(leftoverHoriz, leftoverVert);
            if (longSideFit < bestNode.score2 || (longSideFit == bestNode.score2 && shortSideFit < bestNode.score1)) {
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
            int leftoverHoriz = Math.abs(freeRectangles.get(i).width - rotatedWidth);
            int leftoverVert = Math.abs(freeRectangles.get(i).height - rotatedHeight);
            int shortSideFit = Math.min(leftoverHoriz, leftoverVert);
            int longSideFit = Math.max(leftoverHoriz, leftoverVert);
            if (longSideFit < bestNode.score2 || (longSideFit == bestNode.score2 && shortSideFit < bestNode.score1)) {
                bestNode.x = freeRectangles.get(i).x;
                bestNode.y = freeRectangles.get(i).y;
                bestNode.width = rotatedWidth;
                bestNode.height = rotatedHeight;
                bestNode.score1 = shortSideFit;
                bestNode.score2 = longSideFit;
                bestNode.rotated = true;
            }
        }
    }
    return bestNode;
}
