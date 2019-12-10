/**
 * Sets the quaternion components from the given axis and angle around that axis.
 * @param x X direction of the axis
 * @param y Y direction of the axis
 * @param z Z direction of the axis
 * @param radians The angle in radians
 * @return This quaternion for chaining.
 */
public Quaternion setFromAxisRad(final float x, final float y, final float z, final float radians) {
    float d = Vector3.len(x, y, z);
    if (d == 0f)
        return idt();
    d = 1f / d;
    float l_ang = radians < 0 ? MathUtils.PI2 - (-radians % MathUtils.PI2) : radians % MathUtils.PI2;
    float l_sin = (float) Math.sin(l_ang / 2);
    float l_cos = (float) Math.cos(l_ang / 2);
    return this.set(d * x * l_sin, d * y * l_sin, d * z * l_sin, l_cos).nor();
}
