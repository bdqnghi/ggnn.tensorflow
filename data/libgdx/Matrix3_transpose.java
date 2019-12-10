/**
 * Transposes the current matrix.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix3 transpose() {
    // Where MXY you do not have to change MXX
    float[] val = this.val;
    float v01 = val[M10];
    float v02 = val[M20];
    float v10 = val[M01];
    float v12 = val[M21];
    float v20 = val[M02];
    float v21 = val[M12];
    val[M01] = v01;
    val[M02] = v02;
    val[M10] = v10;
    val[M12] = v12;
    val[M20] = v20;
    val[M21] = v21;
    return this;
}
