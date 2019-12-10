/**
 * Multiplies this vector by the transpose of the first three columns of the matrix. Note: only works for translation and
 * rotation, does not work for scaling. For those, use {@link #rot(Matrix4)} with {@link Matrix4#inv()}.
 * @param matrix The transformation matrix
 * @return The vector for chaining
 */
public Vector3 unrotate(final Matrix4 matrix) {
    final float[] l_mat = matrix.val;
    return this.set(x * l_mat[Matrix4.M00] + y * l_mat[Matrix4.M10] + z * l_mat[Matrix4.M20], x * l_mat[Matrix4.M01] + y * l_mat[Matrix4.M11] + z * l_mat[Matrix4.M21], x * l_mat[Matrix4.M02] + y * l_mat[Matrix4.M12] + z * l_mat[Matrix4.M22]);
}
