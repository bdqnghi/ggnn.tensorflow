/**
 * Sets the rotation of this decal based on the provided Quaternion
 * @param q desired Rotation
 */
public void setRotation(Quaternion q) {
    rotation.set(q);
    updated = false;
}
