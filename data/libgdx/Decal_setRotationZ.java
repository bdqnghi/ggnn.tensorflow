/**
 * Sets the rotation on the local Z axis to the specified angle
 *
 * @param angle Angle in degrees to set rotation to
 */
public void setRotationZ(float angle) {
    rotation.set(Vector3.Z, angle);
    updated = false;
}
