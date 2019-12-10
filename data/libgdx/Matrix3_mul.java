/**
 * Multiplies matrix a with matrix b in the following manner:
 *
 * <pre>
 * mul(A, B) => A := AB
 * </pre>
 * @param mata The float array representing the first matrix. Must have at least 9 elements.
 * @param matb The float array representing the second matrix. Must have at least 9 elements.
 */
private static void mul(float[] mata, float[] matb) {
    float v00 = mata[M00] * matb[M00] + mata[M01] * matb[M10] + mata[M02] * matb[M20];
    float v01 = mata[M00] * matb[M01] + mata[M01] * matb[M11] + mata[M02] * matb[M21];
    float v02 = mata[M00] * matb[M02] + mata[M01] * matb[M12] + mata[M02] * matb[M22];
    float v10 = mata[M10] * matb[M00] + mata[M11] * matb[M10] + mata[M12] * matb[M20];
    float v11 = mata[M10] * matb[M01] + mata[M11] * matb[M11] + mata[M12] * matb[M21];
    float v12 = mata[M10] * matb[M02] + mata[M11] * matb[M12] + mata[M12] * matb[M22];
    float v20 = mata[M20] * matb[M00] + mata[M21] * matb[M10] + mata[M22] * matb[M20];
    float v21 = mata[M20] * matb[M01] + mata[M21] * matb[M11] + mata[M22] * matb[M21];
    float v22 = mata[M20] * matb[M02] + mata[M21] * matb[M12] + mata[M22] * matb[M22];
    mata[M00] = v00;
    mata[M10] = v10;
    mata[M20] = v20;
    mata[M01] = v01;
    mata[M11] = v11;
    mata[M21] = v21;
    mata[M02] = v02;
    mata[M12] = v12;
    mata[M22] = v22;
}
