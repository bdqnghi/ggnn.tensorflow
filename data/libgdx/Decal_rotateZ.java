/**
 * Rotates along local Z axis by the specified angle
 *
 * @param angle Angle in degrees to rotate by
 */
public void rotateZ(float angle) {
    rotator.set(Vector3.Z, angle);
    rotation.mul(rotator);
    updated = false;
}
