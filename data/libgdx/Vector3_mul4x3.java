/**
 * Left-multiplies the vector by the given 4x3 column major matrix. The matrix should be composed by a 3x3 matrix representing
 * rotation and scale plus a 1x3 matrix representing the translation.
 * @param matrix The matrix
 * @return This vector for chaining
 */
public Vector3 mul4x3(float[] matrix) {
    return set(x * matrix[0] + y * matrix[3] + z * matrix[6] + matrix[9], x * matrix[1] + y * matrix[4] + z * matrix[7] + matrix[10], x * matrix[2] + y * matrix[5] + z * matrix[8] + matrix[11]);
}
