/**
 * Sets this matrix to a shearing matrix.
 * @param shear The shear vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToShearing(Vector2 shear) {
    return setToShearing(shear.x, shear.y);
}
