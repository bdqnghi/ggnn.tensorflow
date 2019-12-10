/**
 * Postmultiplies this matrix by the rotation between two vectors.
 * @param v1 The base vector
 * @param v2 The target vector
 * @return This matrix for the purpose of chaining methods together
 */
public Matrix4 rotate(final Vector3 v1, final Vector3 v2) {
    return rotate(quat.setFromCross(v1, v2));
}
