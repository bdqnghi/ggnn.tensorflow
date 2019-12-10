/**
 * Returns the pads, or null if the image had no pads or the pads match the splits. Pads are an int[4] that has left, right,
 * top, bottom.
 */
private int[] getPads(BufferedImage image, String name, int[] splits) {
    WritableRaster raster = image.getRaster();
    int bottom = raster.getHeight() - 1;
    int right = raster.getWidth() - 1;
    int startX = getSplitPoint(raster, name, 1, bottom, true, true);
    int startY = getSplitPoint(raster, name, right, 1, true, false);
    // No need to hunt for the end if a start was never found.
    int endX = 0;
    int endY = 0;
    if (startX != 0)
        endX = getSplitPoint(raster, name, startX + 1, bottom, false, true);
    if (startY != 0)
        endY = getSplitPoint(raster, name, right, startY + 1, false, false);
    // Ensure pixels after the end are not invalid.
    getSplitPoint(raster, name, endX + 1, bottom, true, true);
    getSplitPoint(raster, name, right, endY + 1, true, false);
    // No pads.
    if (startX == 0 && endX == 0 && startY == 0 && endY == 0) {
        return null;
    }
    // -2 here is because the coordinates were computed before the 1px border was stripped.
    if (startX == 0 && endX == 0) {
        startX = -1;
        endX = -1;
    } else {
        if (startX > 0) {
            startX--;
            endX = raster.getWidth() - 2 - (endX - 1);
        } else {
            // If no start point was ever found, we assume full stretch.
            endX = raster.getWidth() - 2;
        }
    }
    if (startY == 0 && endY == 0) {
        startY = -1;
        endY = -1;
    } else {
        if (startY > 0) {
            startY--;
            endY = raster.getHeight() - 2 - (endY - 1);
        } else {
            // If no start point was ever found, we assume full stretch.
            endY = raster.getHeight() - 2;
        }
    }
    if (scale != 1) {
        startX = (int) Math.round(startX * scale);
        endX = (int) Math.round(endX * scale);
        startY = (int) Math.round(startY * scale);
        endY = (int) Math.round(endY * scale);
    }
    int[] pads = new int[] { startX, endX, startY, endY };
    if (splits != null && Arrays.equals(pads, splits)) {
        return null;
    }
    return pads;
}
