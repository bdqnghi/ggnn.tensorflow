/**
 * removes the translational part and transposes the matrix.
 */
public Matrix4 toNormalMatrix() {
    val[M03] = 0;
    val[M13] = 0;
    val[M23] = 0;
    return inv().tra();
}
