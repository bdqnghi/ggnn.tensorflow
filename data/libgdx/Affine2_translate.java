/**
 * Postmultiplies this matrix by a translation matrix.
 * @param trn The translation vector.
 * @return This matrix for the purpose of chaining.
 */
public Affine2 translate(Vector2 trn) {
    return translate(trn.x, trn.y);
}
