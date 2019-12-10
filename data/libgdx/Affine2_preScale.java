/**
 * Premultiplies this matrix with a scale matrix.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining.
 */
public Affine2 preScale(Vector2 scale) {
    return preScale(scale.x, scale.y);
}
