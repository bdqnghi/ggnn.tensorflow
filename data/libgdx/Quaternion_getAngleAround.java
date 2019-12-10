/**
 * Get the angle in degrees of the rotation around the specified axis. The axis must be normalized.
 * @param axis the normalized axis for which to get the angle
 * @return the angle in degrees of the rotation around the specified axis
 */
public float getAngleAround(final Vector3 axis) {
    return getAngleAround(axis.x, axis.y, axis.z);
}
