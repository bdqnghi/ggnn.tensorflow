/**
 * Sets the rotation of the sprite in degrees. Rotation is centered on the origin set in {@link #setOrigin(float, float)}
 */
public void setRotation(float degrees) {
    this.rotation = degrees;
    dirty = true;
}
