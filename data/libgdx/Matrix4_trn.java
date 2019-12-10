/**
 * Adds a translational component to the matrix in the 4th column. The other columns are untouched.
 *
 * @param x The x-component of the translation vector.
 * @param y The y-component of the translation vector.
 * @param z The z-component of the translation vector.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 trn(float x, float y, float z) {
    val[M03] += x;
    val[M13] += y;
    val[M23] += z;
    return this;
}
