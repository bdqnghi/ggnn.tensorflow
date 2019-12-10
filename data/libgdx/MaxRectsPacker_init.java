public void init(int width, int height) {
    binWidth = width;
    binHeight = height;
    usedRectangles.clear();
    freeRectangles.clear();
    Rect n = new Rect();
    n.x = 0;
    n.y = 0;
    n.width = width;
    n.height = height;
    freeRectangles.add(n);
}
