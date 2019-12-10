/**
 * Sets the matrix to the given matrix as a float array. The float array must have at least 9 elements; the first 9 will be
 * copied.
 *
 * @param values The matrix, in float form, that is to be copied. Remember that this matrix is in <a
 *           href="http://en.wikipedia.org/wiki/Row-major_order#Column-major_order">column major</a> order.
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix3 set(float[] values) {
    System.arraycopy(values, 0, val, 0, val.length);
    return this;
}
