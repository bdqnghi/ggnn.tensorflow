/**
 * Gets the perimeter length
 *
 * @return
 */
public final float getPerimeter() {
    return 2.0f * (upperBound.x - lowerBound.x + upperBound.y - lowerBound.y);
}
