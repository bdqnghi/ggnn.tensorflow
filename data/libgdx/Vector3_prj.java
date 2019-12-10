/**
 * Multiplies this vector by the given matrix dividing by w, assuming the fourth (w) component of the vector is 1. This is
 * mostly used to project/unproject vectors via a perspective projection matrix.
 *
 * @param matrix The matrix.
 * @return This vector for chaining
 */
public Vector3 prj(final Matrix4 matrix) {
    final float[] l_mat = matrix.val;
    final float l_w = 1f / (x * l_mat[Matrix4.M30] + y * l_mat[Matrix4.M31] + z * l_mat[Matrix4.M32] + l_mat[Matrix4.M33]);
    return this.set((x * l_mat[Matrix4.M00] + y * l_mat[Matrix4.M01] + z * l_mat[Matrix4.M02] + l_mat[Matrix4.M03]) * l_w, (x * l_mat[Matrix4.M10] + y * l_mat[Matrix4.M11] + z * l_mat[Matrix4.M12] + l_mat[Matrix4.M13]) * l_w, (x * l_mat[Matrix4.M20] + y * l_mat[Matrix4.M21] + z * l_mat[Matrix4.M22] + l_mat[Matrix4.M23]) * l_w);
}
