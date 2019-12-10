/**
 * Multiplies the vector by the transpose of the given matrix.
 * @param matrix The matrix
 * @return This vector for chaining
 */
public Vector3 traMul(Matrix3 matrix) {
    final float[] l_mat = matrix.val;
    return set(x * l_mat[Matrix3.M00] + y * l_mat[Matrix3.M10] + z * l_mat[Matrix3.M20], x * l_mat[Matrix3.M01] + y * l_mat[Matrix3.M11] + z * l_mat[Matrix3.M21], x * l_mat[Matrix3.M02] + y * l_mat[Matrix3.M12] + z * l_mat[Matrix3.M22]);
}
