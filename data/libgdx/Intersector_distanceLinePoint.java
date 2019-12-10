/**
 * Returns the distance between the given line and point. Note the specified line is not a line segment.
 */
public static float distanceLinePoint(float startX, float startY, float endX, float endY, float pointX, float pointY) {
    float normalLength = (float) Math.sqrt((endX - startX) * (endX - startX) + (endY - startY) * (endY - startY));
    return Math.abs((pointX - startX) * (endY - startY) - (pointY - startY) * (endX - startX)) / normalLength;
}
