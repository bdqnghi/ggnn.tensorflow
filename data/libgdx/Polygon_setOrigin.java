/**
 * Sets the origin point to which all of the polygon's local vertices are relative to.
 */
public void setOrigin(float originX, float originY) {
    this.originX = originX;
    this.originY = originY;
    dirty = true;
}
