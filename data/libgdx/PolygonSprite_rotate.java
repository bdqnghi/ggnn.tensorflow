/**
 * Sets the sprite's rotation relative to the current rotation.
 */
public void rotate(float degrees) {
    rotation += degrees;
    dirty = true;
}
