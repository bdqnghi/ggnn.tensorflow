/**
 * Sets this vector to the cross product between it and the other vector.
 * @param x The x-component of the other vector
 * @param y The y-component of the other vector
 * @param z The z-component of the other vector
 * @return This vector for chaining
 */
public Vector3 crs(float x, float y, float z) {
    return this.set(this.y * z - this.z * y, this.z * x - this.x * z, this.x * y - this.y * x);
}
