/**
 * Postmultiplies this matrix with a scale matrix.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining.
 */
public Affine2 scale(Vector2 scale) {
    return scale(scale.x, scale.y);
}
