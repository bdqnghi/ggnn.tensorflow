/**
 * Sets the quaternion components from the given axis and angle around that axis.
 * @param x X direction of the axis
 * @param y Y direction of the axis
 * @param z Z direction of the axis
 * @param degrees The angle in degrees
 * @return This quaternion for chaining.
 */
public Quaternion setFromAxis(final float x, final float y, final float z, final float degrees) {
    return setFromAxisRad(x, y, z, degrees * MathUtils.degreesToRadians);
}
