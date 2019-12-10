/**
 * Sets this matrix to the given affine matrix. The values are mapped as follows:
 *
 * <pre>
 *      [  M00  M01   0   M02  ]
 *      [  M10  M11   0   M12  ]
 *      [   0    0    1    0   ]
 *      [   0    0    0    1   ]
 * </pre>
 * @param affine the affine matrix
 * @return This matrix for chaining
 */
public Matrix4 set(Affine2 affine) {
    val[M00] = affine.m00;
    val[M10] = affine.m10;
    val[M20] = 0;
    val[M30] = 0;
    val[M01] = affine.m01;
    val[M11] = affine.m11;
    val[M21] = 0;
    val[M31] = 0;
    val[M02] = 0;
    val[M12] = 0;
    val[M22] = 1;
    val[M32] = 0;
    val[M03] = affine.m02;
    val[M13] = affine.m12;
    val[M23] = 0;
    val[M33] = 1;
    return this;
}
