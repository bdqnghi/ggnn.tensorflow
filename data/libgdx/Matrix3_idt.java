/**
 * Sets this matrix to the identity matrix
 * @return This matrix for the purpose of chaining operations.
 */
public Matrix3 idt() {
    float[] val = this.val;
    val[M00] = 1;
    val[M10] = 0;
    val[M20] = 0;
    val[M01] = 0;
    val[M11] = 1;
    val[M21] = 0;
    val[M02] = 0;
    val[M12] = 0;
    val[M22] = 1;
    return this;
}
