/**
 * Scale this matrix using the x and y components of the vector but leave the rest of the matrix alone.
 * @param scale The {@link Vector3} to use to scale this matrix. The z component will be ignored.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix3 scl(Vector3 scale) {
    val[M00] *= scale.x;
    val[M11] *= scale.y;
    return this;
}
