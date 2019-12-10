/**
 * Copies the 4x3 upper-left sub-matrix into float array. The destination array is supposed to be a column major matrix.
 * @param dst the destination matrix
 */
public void extract4x3Matrix(float[] dst) {
    dst[0] = val[M00];
    dst[1] = val[M10];
    dst[2] = val[M20];
    dst[3] = val[M01];
    dst[4] = val[M11];
    dst[5] = val[M21];
    dst[6] = val[M02];
    dst[7] = val[M12];
    dst[8] = val[M22];
    dst[9] = val[M03];
    dst[10] = val[M13];
    dst[11] = val[M23];
}
