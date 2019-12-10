/**
 * Returns the squared distance between this point and the given point
 * @param x The x-component of the other point
 * @param y The y-component of the other point
 * @param z The z-component of the other point
 * @return The squared distance
 */
public float dst2(float x, float y, float z) {
    final float a = x - this.x;
    final float b = y - this.y;
    final float c = z - this.z;
    return a * a + b * b + c * c;
}
