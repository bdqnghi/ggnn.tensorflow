/**
 * @param c the other {@link Circle}
 * @return whether this circle overlaps the other circle.
 */
public boolean overlaps(Circle c) {
    float dx = x - c.x;
    float dy = y - c.y;
    float distance = dx * dx + dy * dy;
    float radiusSum = radius + c.radius;
    return distance < radiusSum * radiusSum;
}
