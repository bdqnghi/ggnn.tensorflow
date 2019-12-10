/**
 * Rotates along local Y axis by the specified angle
 *
 * @param angle Angle in degrees to rotate by
 */
public void rotateY(float angle) {
    rotator.set(Vector3.Y, angle);
    rotation.mul(rotator);
    updated = false;
}
