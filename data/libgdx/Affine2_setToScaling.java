/**
 * Sets this matrix to a scaling matrix.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToScaling(Vector2 scale) {
    return setToScaling(scale.x, scale.y);
}
