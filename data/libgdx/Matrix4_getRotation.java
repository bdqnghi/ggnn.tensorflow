/**
 * Gets the rotation of this matrix.
 * @param rotation The {@link Quaternion} to receive the rotation
 * @return The provided {@link Quaternion} for chaining.
 */
public Quaternion getRotation(Quaternion rotation) {
    return rotation.setFromMatrix(this);
}
