/**
 * Assumes that both matrices are 2D affine transformations, copying only the relevant components. The copied values are:
 *
 * <pre>
 *      [  M00  M01   _   M03  ]
 *      [  M10  M11   _   M13  ]
 *      [   _    _    _    _   ]
 *      [   _    _    _    _   ]
 * </pre>
 * @param mat the source matrix
 * @return This matrix for chaining
 */
public Matrix4 setAsAffine(Matrix4 mat) {
    val[M00] = mat.val[M00];
    val[M10] = mat.val[M10];
    val[M01] = mat.val[M01];
    val[M11] = mat.val[M11];
    val[M03] = mat.val[M03];
    val[M13] = mat.val[M13];
    return this;
}
