/**
 * Returns the dot product between this and the given vector.
 * @param x The x-component of the other vector
 * @param y The y-component of the other vector
 * @param z The z-component of the other vector
 * @return The dot product
 */
public float dot(float x, float y, float z) {
    return this.x * x + this.y * y + this.z * z;
}
