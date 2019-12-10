/**
 * @param sphere the other sphere
 * @return whether this and the other sphere overlap
 */
public boolean overlaps(Sphere sphere) {
    return center.dst2(sphere.center) < (radius + sphere.radius) * (radius + sphere.radius);
}
