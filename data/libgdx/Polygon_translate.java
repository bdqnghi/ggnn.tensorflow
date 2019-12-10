/**
 * Translates the polygon's position by the specified horizontal and vertical amounts.
 */
public void translate(float x, float y) {
    this.x += x;
    this.y += y;
    dirty = true;
}
