/**
 * Sets the 4th column to the translation vector.
 *
 * @param x The X coordinate of the translation vector
 * @param y The Y coordinate of the translation vector
 * @param z The Z coordinate of the translation vector
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setTranslation(float x, float y, float z) {
    val[M03] = x;
    val[M13] = y;
    val[M23] = z;
    return this;
}
