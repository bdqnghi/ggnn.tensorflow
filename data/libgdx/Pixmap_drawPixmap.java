/**
 * Draws an area form another Pixmap to this Pixmap. This will automatically scale and stretch the source image to the
 * specified target rectangle. Use {@link Pixmap#setFilter(Filter)} to specify the type of filtering to be used (nearest
 * neighbour or bilinear).
 *
 * @param pixmap The other Pixmap
 * @param srcx The source x-coordinate (top left corner)
 * @param srcy The source y-coordinate (top left corner);
 * @param srcWidth The width of the area form the other Pixmap in pixels
 * @param srcHeight The height of the area form the other Pixmap in pixles
 * @param dstx The target x-coordinate (top left corner)
 * @param dsty The target y-coordinate (top left corner)
 * @param dstWidth The target width
 * @param dstHeight the target height
 */
public void drawPixmap(Pixmap pixmap, int srcx, int srcy, int srcWidth, int srcHeight, int dstx, int dsty, int dstWidth, int dstHeight) {
    image(pixmap.getCanvasElement(), srcx, srcy, srcWidth, srcHeight, dstx, dsty, dstWidth, dstHeight);
}
