/**
 * Sets the matrix to an identity matrix.
 *
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 idt() {
    val[M00] = 1;
    val[M01] = 0;
    val[M02] = 0;
    val[M03] = 0;
    val[M10] = 0;
    val[M11] = 1;
    val[M12] = 0;
    val[M13] = 0;
    val[M20] = 0;
    val[M21] = 0;
    val[M22] = 1;
    val[M23] = 0;
    val[M30] = 0;
    val[M31] = 0;
    val[M32] = 0;
    val[M33] = 1;
    return this;
}
