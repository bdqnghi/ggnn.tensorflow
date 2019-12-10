/**
 * Multiplies this vector by the first three columns of the matrix, essentially only applying rotation and scaling.
 *
 * @param matrix The matrix
 * @return This vector for chaining
 */
public Vector3 rot(final Matrix4 matrix) {
    final float[] l_mat = matrix.val;
    return this.set(x * l_mat[Matrix4.M00] + y * l_mat[Matrix4.M01] + z * l_mat[Matrix4.M02], x * l_mat[Matrix4.M10] + y * l_mat[Matrix4.M11] + z * l_mat[Matrix4.M12], x * l_mat[Matrix4.M20] + y * l_mat[Matrix4.M21] + z * l_mat[Matrix4.M22]);
}
