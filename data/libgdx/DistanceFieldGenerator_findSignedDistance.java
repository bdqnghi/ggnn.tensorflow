/**
 * Returns the signed distance for a given point.
 *
 * For points "inside", this is the distance to the closest "outside" pixel.
 * For points "outside", this is the <em>negative</em> distance to the closest "inside" pixel.
 * If no pixel of different color is found within a radius of {@code spread}, returns
 * the {@code -spread} or {@code spread}, respectively.
 *
 * @param centerX the x coordinate of the center point
 * @param centerY the y coordinate of the center point
 * @param bitmap the array representation of an image, {@code true} representing "inside"
 * @return the signed distance
 */
private float findSignedDistance(final int centerX, final int centerY, boolean[][] bitmap) {
    final int width = bitmap[0].length;
    final int height = bitmap.length;
    final boolean base = bitmap[centerY][centerX];
    final int delta = (int) Math.ceil(spread);
    final int startX = Math.max(0, centerX - delta);
    final int endX = Math.min(width - 1, centerX + delta);
    final int startY = Math.max(0, centerY - delta);
    final int endY = Math.min(height - 1, centerY + delta);
    int closestSquareDist = delta * delta;
    for (int y = startY; y <= endY; ++y) {
        for (int x = startX; x <= endX; ++x) {
            if (base != bitmap[y][x]) {
                final int squareDist = squareDist(centerX, centerY, x, y);
                if (squareDist < closestSquareDist) {
                    closestSquareDist = squareDist;
                }
            }
        }
    }
    float closestDist = (float) Math.sqrt(closestSquareDist);
    return (base ? 1 : -1) * Math.min(closestDist, spread);
}
