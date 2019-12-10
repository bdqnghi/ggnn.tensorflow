/**
 * Calculates the 2D cross product between this and the given vector.
 * @param x the x-coordinate of the other vector
 * @param y the y-coordinate of the other vector
 * @return the cross product
 */
public float crs(float x, float y) {
    return this.x * y - this.y * x;
}
