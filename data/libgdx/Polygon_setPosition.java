/**
 * Sets the polygon's position within the world.
 */
public void setPosition(float x, float y) {
    this.x = x;
    this.y = y;
    dirty = true;
}
