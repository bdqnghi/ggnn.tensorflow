/**
 * Transposes the matrix.
 *
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 tra() {
    tmp[M00] = val[M00];
    tmp[M01] = val[M10];
    tmp[M02] = val[M20];
    tmp[M03] = val[M30];
    tmp[M10] = val[M01];
    tmp[M11] = val[M11];
    tmp[M12] = val[M21];
    tmp[M13] = val[M31];
    tmp[M20] = val[M02];
    tmp[M21] = val[M12];
    tmp[M22] = val[M22];
    tmp[M23] = val[M32];
    tmp[M30] = val[M03];
    tmp[M31] = val[M13];
    tmp[M32] = val[M23];
    tmp[M33] = val[M33];
    return set(tmp);
}
