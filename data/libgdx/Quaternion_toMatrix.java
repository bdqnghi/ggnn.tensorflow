// TODO : the matrix4 set(quaternion) doesnt set the last row+col of the matrix to 0,0,0,1 so... that's why there is this
// method
/**
 * Fills a 4x4 matrix with the rotation matrix represented by this quaternion.
 *
 * @param matrix Matrix to fill
 */
public void toMatrix(final float[] matrix) {
    final float xx = x * x;
    final float xy = x * y;
    final float xz = x * z;
    final float xw = x * w;
    final float yy = y * y;
    final float yz = y * z;
    final float yw = y * w;
    final float zz = z * z;
    final float zw = z * w;
    // Set matrix from quaternion
    matrix[Matrix4.M00] = 1 - 2 * (yy + zz);
    matrix[Matrix4.M01] = 2 * (xy - zw);
    matrix[Matrix4.M02] = 2 * (xz + yw);
    matrix[Matrix4.M03] = 0;
    matrix[Matrix4.M10] = 2 * (xy + zw);
    matrix[Matrix4.M11] = 1 - 2 * (xx + zz);
    matrix[Matrix4.M12] = 2 * (yz - xw);
    matrix[Matrix4.M13] = 0;
    matrix[Matrix4.M20] = 2 * (xz - yw);
    matrix[Matrix4.M21] = 2 * (yz + xw);
    matrix[Matrix4.M22] = 1 - 2 * (xx + yy);
    matrix[Matrix4.M23] = 0;
    matrix[Matrix4.M30] = 0;
    matrix[Matrix4.M31] = 0;
    matrix[Matrix4.M32] = 0;
    matrix[Matrix4.M33] = 1;
}
