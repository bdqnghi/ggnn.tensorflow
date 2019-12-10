/**
 * Subtracts the given value from all components of this vector
 *
 * @param value The value
 * @return This vector for chaining
 */
public Vector3 sub(float value) {
    return this.set(this.x - value, this.y - value, this.z - value);
}
