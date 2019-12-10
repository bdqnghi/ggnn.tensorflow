/**
 * Sets this matrix to a translation matrix.
 * @param trn The translation vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToTranslation(Vector2 trn) {
    return setToTranslation(trn.x, trn.y);
}
