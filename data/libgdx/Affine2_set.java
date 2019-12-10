/**
 * Copies the 2D transformation components from the provided 4x4 matrix. The values are mapped as follows:
 *
 * <pre>
 *      [  M00  M01  M03  ]
 *      [  M10  M11  M13  ]
 *      [   0    0    1   ]
 * </pre>
 * @param matrix The source matrix, assumed to be an affine transformation within XY plane. This matrix will not be modified.
 * @return This matrix for the purpose of chaining operations.
 */
public Affine2 set(Matrix4 matrix) {
    float[] other = matrix.val;
    m00 = other[Matrix4.M00];
    m01 = other[Matrix4.M01];
    m02 = other[Matrix4.M03];
    m10 = other[Matrix4.M10];
    m11 = other[Matrix4.M11];
    m12 = other[Matrix4.M13];
    return this;
}
