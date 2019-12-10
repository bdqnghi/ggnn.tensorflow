/**
 * @param c the other {@link Circle}
 * @return whether this circle contains the other circle.
 */
public boolean contains(Circle c) {
    final float radiusDiff = radius - c.radius;
    // Can't contain bigger circle
    if (radiusDiff < 0f)
        return false;
    final float dx = x - c.x;
    final float dy = y - c.y;
    final float dst = dx * dx + dy * dy;
    final float radiusSum = radius + c.radius;
    return (!(radiusDiff * radiusDiff < dst) && (dst < radiusSum * radiusSum));
}
