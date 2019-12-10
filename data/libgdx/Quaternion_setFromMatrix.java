/**
 * Sets the Quaternion from the given rotation matrix, which must not contain scaling.
 */
public Quaternion setFromMatrix(Matrix3 matrix) {
    return setFromMatrix(false, matrix);
}
