private int contactPointScoreNode(int x, int y, int width, int height) {
    int score = 0;
    if (x == 0 || x + width == binWidth)
        score += height;
    if (y == 0 || y + height == binHeight)
        score += width;
    for (int i = 0; i < usedRectangles.size; i++) {
        if (usedRectangles.get(i).x == x + width || usedRectangles.get(i).x + usedRectangles.get(i).width == x)
            score += commonIntervalLength(usedRectangles.get(i).y, usedRectangles.get(i).y + usedRectangles.get(i).height, y, y + height);
        if (usedRectangles.get(i).y == y + height || usedRectangles.get(i).y + usedRectangles.get(i).height == y)
            score += commonIntervalLength(usedRectangles.get(i).x, usedRectangles.get(i).x + usedRectangles.get(i).width, x, x + width);
    }
    return score;
}
