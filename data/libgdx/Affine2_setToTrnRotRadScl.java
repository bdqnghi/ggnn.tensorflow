/**
 * Sets this matrix to a concatenation of translation, rotation and scale. It is a more efficient form for:
 * <code>idt().translate(trn).rotateRad(radians).scale(scale)</code>
 * @param trn The translation vector.
 * @param radians The angle in radians.
 * @param scale The scale vector.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 setToTrnRotRadScl(Vector2 trn, float radians, Vector2 scale) {
    return setToTrnRotRadScl(trn.x, trn.y, radians, scale.x, scale.y);
}
