/**
 * Multiplies the components of this quaternion with the given scalar.
 * @param scalar the scalar.
 * @return this quaternion for chaining.
 */
public Quaternion mul(float scalar) {
    this.x *= scalar;
    this.y *= scalar;
    this.z *= scalar;
    this.w *= scalar;
    return this;
}
