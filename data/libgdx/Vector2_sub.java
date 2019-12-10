/**
 * Substracts the other vector from this vector.
 * @param x The x-component of the other vector
 * @param y The y-component of the other vector
 * @return This vector for chaining
 */
public Vector2 sub(float x, float y) {
    this.x -= x;
    this.y -= y;
    return this;
}
