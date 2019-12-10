/**
 * Sets the origin in relation to the sprite's position for scaling and rotation.
 */
public void setOrigin(float originX, float originY) {
    this.originX = originX;
    this.originY = originY;
    dirty = true;
}
