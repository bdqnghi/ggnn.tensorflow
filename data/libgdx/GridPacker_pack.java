public Array<Page> pack(Array<Rect> inputRects) {
    if (!settings.silent)
        System.out.print("Packing");
    int cellWidth = 0, cellHeight = 0;
    for (int i = 0, nn = inputRects.size; i < nn; i++) {
        Rect rect = inputRects.get(i);
        cellWidth = Math.max(cellWidth, rect.width);
        cellHeight = Math.max(cellHeight, rect.height);
    }
    cellWidth += settings.paddingX;
    cellHeight += settings.paddingY;
    inputRects.reverse();
    Array<Page> pages = new Array();
    while (inputRects.size > 0) {
        Page result = packPage(inputRects, cellWidth, cellHeight);
        pages.add(result);
    }
    return pages;
}
