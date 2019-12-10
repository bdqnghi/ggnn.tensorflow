/**
 * Adds the given value to all three components of the vector.
 *
 * @param values The value
 * @return This vector for chaining
 */
public Vector3 add(float values) {
    return this.set(this.x + values, this.y + values, this.z + values);
}
