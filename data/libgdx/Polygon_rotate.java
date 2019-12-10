/**
 * Applies additional rotation to the polygon by the supplied degrees.
 */
public void rotate(float degrees) {
    rotation += degrees;
    dirty = true;
}
