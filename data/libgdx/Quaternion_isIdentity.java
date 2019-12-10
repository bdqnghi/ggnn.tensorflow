/**
 * @return If this quaternion is an identity Quaternion
 */
public boolean isIdentity(final float tolerance) {
    return MathUtils.isZero(x, tolerance) && MathUtils.isZero(y, tolerance) && MathUtils.isZero(z, tolerance) && MathUtils.isEqual(w, 1f, tolerance);
}
