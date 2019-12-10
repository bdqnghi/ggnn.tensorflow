/**
 * Sets the rotation on the local Y axis to the specified angle
 *
 * @param angle Angle in degrees to set rotation to
 */
public void setRotationY(float angle) {
    rotation.set(Vector3.Y, angle);
    updated = false;
}
