/**
 * Extract a ninepatch from a texture atlas, according to the android specification.
 * @see <a href="http://developer.android.com/guide/topics/graphics/2d-graphics.html#nine-patch">ninepatch specification</a>
 * @param page The image file related to the page the region is in
 * @param region The region to extract
 */
private BufferedImage extractNinePatch(BufferedImage page, Region region, File outputDirFile) {
    BufferedImage splitImage = extractImage(page, region, outputDirFile, NINEPATCH_PADDING);
    Graphics2D g2 = splitImage.createGraphics();
    g2.setColor(Color.BLACK);
    // Draw the four lines to save the ninepatch's padding and splits
    int startX = region.splits[0] + NINEPATCH_PADDING;
    int endX = region.width - region.splits[1] + NINEPATCH_PADDING - 1;
    int startY = region.splits[2] + NINEPATCH_PADDING;
    int endY = region.height - region.splits[3] + NINEPATCH_PADDING - 1;
    if (endX >= startX)
        g2.drawLine(startX, 0, endX, 0);
    if (endY >= startY)
        g2.drawLine(0, startY, 0, endY);
    if (region.pads != null) {
        int padStartX = region.pads[0] + NINEPATCH_PADDING;
        int padEndX = region.width - region.pads[1] + NINEPATCH_PADDING - 1;
        int padStartY = region.pads[2] + NINEPATCH_PADDING;
        int padEndY = region.height - region.pads[3] + NINEPATCH_PADDING - 1;
        g2.drawLine(padStartX, splitImage.getHeight() - 1, padEndX, splitImage.getHeight() - 1);
        g2.drawLine(splitImage.getWidth() - 1, padStartY, splitImage.getWidth() - 1, padEndY);
    }
    g2.dispose();
    return splitImage;
}
