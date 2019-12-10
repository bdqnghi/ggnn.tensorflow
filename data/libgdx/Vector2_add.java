/**
 * Adds the given components to this vector
 * @param x The x-component
 * @param y The y-component
 * @return This vector for chaining
 */
public Vector2 add(float x, float y) {
    this.x += x;
    this.y += y;
    return this;
}
