/**
 * Linearly interpolates between this matrix and the given matrix mixing by alpha
 * @param matrix the matrix
 * @param alpha the alpha value in the range [0,1]
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 lerp(Matrix4 matrix, float alpha) {
    for (int i = 0; i < 16; i++) this.val[i] = this.val[i] * (1 - alpha) + matrix.val[i] * alpha;
    return this;
}
