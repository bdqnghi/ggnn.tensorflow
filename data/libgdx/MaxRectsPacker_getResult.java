public Page getResult() {
    int w = 0, h = 0;
    for (int i = 0; i < usedRectangles.size; i++) {
        Rect rect = usedRectangles.get(i);
        w = Math.max(w, rect.x + rect.width);
        h = Math.max(h, rect.y + rect.height);
    }
    Page result = new Page();
    result.outputRects = new Array(usedRectangles);
    result.occupancy = getOccupancy();
    result.width = w;
    result.height = h;
    return result;
}
