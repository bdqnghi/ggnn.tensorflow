/**
 * Rotates the direction and up vector of this camera by the given {@link Quaternion}. The direction and up vector will not be
 * orthogonalized.
 *
 * @param quat The quaternion
 */
public void rotate(final Quaternion quat) {
    quat.transform(direction);
    quat.transform(up);
}
