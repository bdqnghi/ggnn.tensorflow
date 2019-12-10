/**
 * Sets this matrix to a concatenation of translation, rotation and scale. It is a more efficient form for:
 * <code>idt().translate(trn).rotate(degrees).scale(scale)</code>
 * @param trn The translation vector.
 * @param degrees The angle in degrees.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToTrnRotScl(Vector2 trn, float degrees, Vector2 scale) {
    return setToTrnRotScl(trn.x, trn.y, degrees, scale.x, scale.y);
}
