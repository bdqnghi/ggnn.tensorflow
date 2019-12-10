/**
 * Set the matrix to a rotation matrix between two vectors.
 * @param x1 The base vectors x value
 * @param y1 The base vectors y value
 * @param z1 The base vectors z value
 * @param x2 The target vector x value
 * @param y2 The target vector y value
 * @param z2 The target vector z value
 * @return This matrix for the purpose of chaining methods together
 */
public Matrix4 setToRotation(final float x1, final float y1, final float z1, final float x2, final float y2, final float z2) {
    return set(quat.setFromCross(x1, y1, z1, x2, y2, z2));
}
