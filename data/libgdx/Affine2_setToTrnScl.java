/**
 * Sets this matrix to a concatenation of translation and scale. It is a more efficient form for:
 * <code>idt().translate(trn).scale(scale)</code>
 * @param trn The translation vector.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToTrnScl(Vector2 trn, Vector2 scale) {
    return setToTrnScl(trn.x, trn.y, scale.x, scale.y);
}
