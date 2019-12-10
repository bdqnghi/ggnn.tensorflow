/**
 * Normalizes this quaternion to unit length
 * @return the quaternion for chaining
 */
public Quaternion nor() {
    float len = len2();
    if (len != 0.f && !MathUtils.isEqual(len, 1f)) {
        len = (float) Math.sqrt(len);
        w /= len;
        x /= len;
        y /= len;
        z /= len;
    }
    return this;
}
