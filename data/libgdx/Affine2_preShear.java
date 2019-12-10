/**
 * Premultiplies this matrix by a shear matrix.
 * @param shear The shear vector.
 * @return This matrix for the purpose of chaining.
 */
public Affine2 preShear(Vector2 shear) {
    return preShear(shear.x, shear.y);
}
