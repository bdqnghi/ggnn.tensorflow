/**
 * Sets the rotation on the local X axis to the specified angle
 *
 * @param angle Angle in degrees to set rotation to
 */
public void setRotationX(float angle) {
    rotation.set(Vector3.X, angle);
    updated = false;
}
