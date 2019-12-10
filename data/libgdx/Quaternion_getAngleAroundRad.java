/**
 * Get the angle in radians of the rotation around the specified axis. The axis must be normalized.
 * @param axis the normalized axis for which to get the angle
 * @return the angle in radians of the rotation around the specified axis
 */
public float getAngleAroundRad(final Vector3 axis) {
    return getAngleAroundRad(axis.x, axis.y, axis.z);
}
