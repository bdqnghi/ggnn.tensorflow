/**
 * Adds a translational component to the matrix in the 3rd column. The other columns are untouched.
 * @param vector The translation vector. (The z-component of the vector is ignored because this is a 3x3 matrix)
 * @return This matrix for the purpose of chaining.
 */
public Matrix3 trn(Vector3 vector) {
    val[M02] += vector.x;
    val[M12] += vector.y;
    return this;
}
