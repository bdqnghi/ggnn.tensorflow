/**
 * Postmultiplies this matrix by a shear matrix.
 * @param shear The shear vector.
 * @return This matrix for the purpose of chaining.
 */
public Affine2 shear(Vector2 shear) {
    return shear(shear.x, shear.y);
}
