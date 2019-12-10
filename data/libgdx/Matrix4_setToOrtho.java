/**
 * Sets the matrix to an orthographic projection like glOrtho (http://www.opengl.org/sdk/docs/man/xhtml/glOrtho.xml) following
 * the OpenGL equivalent
 *
 * @param left The left clipping plane
 * @param right The right clipping plane
 * @param bottom The bottom clipping plane
 * @param top The top clipping plane
 * @param near The near clipping plane
 * @param far The far clipping plane
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setToOrtho(float left, float right, float bottom, float top, float near, float far) {
    this.idt();
    float x_orth = 2 / (right - left);
    float y_orth = 2 / (top - bottom);
    float z_orth = -2 / (far - near);
    float tx = -(right + left) / (right - left);
    float ty = -(top + bottom) / (top - bottom);
    float tz = -(far + near) / (far - near);
    val[M00] = x_orth;
    val[M10] = 0;
    val[M20] = 0;
    val[M30] = 0;
    val[M01] = 0;
    val[M11] = y_orth;
    val[M21] = 0;
    val[M31] = 0;
    val[M02] = 0;
    val[M12] = 0;
    val[M22] = z_orth;
    val[M32] = 0;
    val[M03] = tx;
    val[M13] = ty;
    val[M23] = tz;
    val[M33] = 1;
    return this;
}
