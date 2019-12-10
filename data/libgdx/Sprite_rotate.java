/**
 * Sets the sprite's rotation in degrees relative to the current rotation. Rotation is centered on the origin set in
 * {@link #setOrigin(float, float)}
 */
public void rotate(float degrees) {
    if (degrees == 0)
        return;
    rotation += degrees;
    dirty = true;
}
