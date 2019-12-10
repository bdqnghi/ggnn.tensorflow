/**
 * Returns > 0 if the points are a counterclockwise turn, < 0 if clockwise, and 0 if colinear.
 */
private float ccw(float p3x, float p3y) {
    FloatArray hull = this.hull;
    int size = hull.size;
    float p1x = hull.get(size - 4);
    float p1y = hull.get(size - 3);
    float p2x = hull.get(size - 2);
    float p2y = hull.peek();
    return (p2x - p1x) * (p3y - p1y) - (p2y - p1y) * (p3x - p1x);
}
