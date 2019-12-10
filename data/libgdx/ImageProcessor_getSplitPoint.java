/**
 * Hunts for the start or end of a sequence of split pixels. Begins searching at (startX, startY) then follows along the x or y
 * axis (depending on value of xAxis) for the first non-transparent pixel if startPoint is true, or the first transparent pixel
 * if startPoint is false. Returns 0 if none found, as 0 is considered an invalid split point being in the outer border which
 * will be stripped.
 */
static private int getSplitPoint(WritableRaster raster, String name, int startX, int startY, boolean startPoint, boolean xAxis) {
    int[] rgba = new int[4];
    int next = xAxis ? startX : startY;
    int end = xAxis ? raster.getWidth() : raster.getHeight();
    int breakA = startPoint ? 255 : 0;
    int x = startX;
    int y = startY;
    while (next != end) {
        if (xAxis)
            x = next;
        else
            y = next;
        raster.getPixel(x, y, rgba);
        if (rgba[3] == breakA)
            return next;
        if (!startPoint && (rgba[0] != 0 || rgba[1] != 0 || rgba[2] != 0 || rgba[3] != 255))
            splitError(x, y, rgba, name);
        next++;
    }
    return 0;
}
