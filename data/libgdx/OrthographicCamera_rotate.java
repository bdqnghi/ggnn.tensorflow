/**
 * Rotates the camera by the given angle around the direction vector. The direction and up vector will not be orthogonalized.
 * @param angle
 */
public void rotate(float angle) {
    rotate(direction, angle);
}
