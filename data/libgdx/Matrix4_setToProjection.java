/**
 * Sets the matrix to a projection matrix with a near/far plane, and left, bottom, right and top specifying the points on the
 * near plane that are mapped to the lower left and upper right corners of the viewport. This allows to create projection
 * matrix with off-center vanishing point.
 *
 * @param left
 * @param right
 * @param bottom
 * @param top
 * @param near The near plane
 * @param far The far plane
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setToProjection(float left, float right, float bottom, float top, float near, float far) {
    float x = 2.0f * near / (right - left);
    float y = 2.0f * near / (top - bottom);
    float a = (right + left) / (right - left);
    float b = (top + bottom) / (top - bottom);
    float l_a1 = (far + near) / (near - far);
    float l_a2 = (2 * far * near) / (near - far);
    val[M00] = x;
    val[M10] = 0;
    val[M20] = 0;
    val[M30] = 0;
    val[M01] = 0;
    val[M11] = y;
    val[M21] = 0;
    val[M31] = 0;
    val[M02] = a;
    val[M12] = b;
    val[M22] = l_a1;
    val[M32] = -1;
    val[M03] = 0;
    val[M13] = 0;
    val[M23] = l_a2;
    val[M33] = 0;
    return this;
}
