/**
 * Determines whether the given rectangles intersect and, if they do, sets the supplied {@code intersection} rectangle to the
 * area of overlap.
 *
 * @return Whether the rectangles intersect
 */
static public boolean intersectRectangles(Rectangle rectangle1, Rectangle rectangle2, Rectangle intersection) {
    if (rectangle1.overlaps(rectangle2)) {
        intersection.x = Math.max(rectangle1.x, rectangle2.x);
        intersection.width = Math.min(rectangle1.x + rectangle1.width, rectangle2.x + rectangle2.width) - intersection.x;
        intersection.y = Math.max(rectangle1.y, rectangle2.y);
        intersection.height = Math.min(rectangle1.y + rectangle1.height, rectangle2.y + rectangle2.height) - intersection.y;
        return true;
    }
    return false;
}
