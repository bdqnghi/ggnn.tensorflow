/**
 * Returns the splits, or null if the image had no splits or the splits were only a single region. Splits are an int[4] that
 * has left, right, top, bottom.
 */
private int[] getSplits(BufferedImage image, String name) {
    WritableRaster raster = image.getRaster();
    int startX = getSplitPoint(raster, name, 1, 0, true, true);
    int endX = getSplitPoint(raster, name, startX, 0, false, true);
    int startY = getSplitPoint(raster, name, 0, 1, true, false);
    int endY = getSplitPoint(raster, name, 0, startY, false, false);
    // Ensure pixels after the end are not invalid.
    getSplitPoint(raster, name, endX + 1, 0, true, true);
    getSplitPoint(raster, name, 0, endY + 1, true, false);
    // No splits, or all splits.
    if (startX == 0 && endX == 0 && startY == 0 && endY == 0)
        return null;
    // Subtraction here is because the coordinates were computed before the 1px border was stripped.
    if (startX != 0) {
        startX--;
        endX = raster.getWidth() - 2 - (endX - 1);
    } else {
        // If no start point was ever found, we assume full stretch.
        endX = raster.getWidth() - 2;
    }
    if (startY != 0) {
        startY--;
        endY = raster.getHeight() - 2 - (endY - 1);
    } else {
        // If no start point was ever found, we assume full stretch.
        endY = raster.getHeight() - 2;
    }
    if (scale != 1) {
        startX = (int) Math.round(startX * scale);
        endX = (int) Math.round(endX * scale);
        startY = (int) Math.round(startY * scale);
        endY = (int) Math.round(endY * scale);
    }
    return new int[] { startX, endX, startY, endY };
}
