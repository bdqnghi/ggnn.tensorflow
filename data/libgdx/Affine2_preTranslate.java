/**
 * Premultiplies this matrix by a translation matrix.
 * @param trn The translation vector.
 * @return This matrix for the purpose of chaining.
 */
public Affine2 preTranslate(Vector2 trn) {
    return preTranslate(trn.x, trn.y);
}
