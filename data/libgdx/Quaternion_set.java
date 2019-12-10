/**
 * Sets the quaternion components from the given axis and angle around that axis.
 *
 * @param axis The axis
 * @param angle The angle in degrees
 * @return This quaternion for chaining.
 */
public Quaternion set(Vector3 axis, float angle) {
    return setFromAxis(axis.x, axis.y, axis.z, angle);
}
