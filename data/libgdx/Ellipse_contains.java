/**
 * Checks whether or not this ellipse contains the given point.
 *
 * @param point Position vector
 *
 * @return true if this ellipse contains the given point; false otherwise.
 */
public boolean contains(Vector2 point) {
    return contains(point.x, point.y);
}
