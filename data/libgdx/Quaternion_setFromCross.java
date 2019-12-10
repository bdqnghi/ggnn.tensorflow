/**
 * Set this quaternion to the rotation between two vectors.
 * @param x1 The base vectors x value, which should be normalized.
 * @param y1 The base vectors y value, which should be normalized.
 * @param z1 The base vectors z value, which should be normalized.
 * @param x2 The target vector x value, which should be normalized.
 * @param y2 The target vector y value, which should be normalized.
 * @param z2 The target vector z value, which should be normalized.
 * @return This quaternion for chaining
 */
public Quaternion setFromCross(final float x1, final float y1, final float z1, final float x2, final float y2, final float z2) {
    final float dot = MathUtils.clamp(Vector3.dot(x1, y1, z1, x2, y2, z2), -1f, 1f);
    final float angle = (float) Math.acos(dot);
    return setFromAxisRad(y1 * z2 - z1 * y2, z1 * x2 - x1 * z2, x1 * y2 - y1 * x2, angle);
}
