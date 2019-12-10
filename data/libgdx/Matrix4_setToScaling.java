/**
 * Sets this matrix to a scaling matrix
 *
 * @param x The x-component of the scaling vector
 * @param y The y-component of the scaling vector
 * @param z The z-component of the scaling vector
 * @return This matrix for chaining.
 */
public Matrix4 setToScaling(float x, float y, float z) {
    idt();
    val[M00] = x;
    val[M11] = y;
    val[M22] = z;
    return this;
}
