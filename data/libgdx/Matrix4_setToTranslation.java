/**
 * Sets this matrix to a translation matrix, overwriting it first by an identity matrix and then setting the 4th column to the
 * translation vector.
 *
 * @param x The x-component of the translation vector.
 * @param y The y-component of the translation vector.
 * @param z The z-component of the translation vector.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setToTranslation(float x, float y, float z) {
    idt();
    val[M03] = x;
    val[M13] = y;
    val[M23] = z;
    return this;
}
