/**
 * Rotates along local X axis by the specified angle
 *
 * @param angle Angle in degrees to rotate by
 */
public void rotateX(float angle) {
    rotator.set(Vector3.X, angle);
    rotation.mul(rotator);
    updated = false;
}
