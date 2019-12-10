/**
 * Left-multiplies this vector by the given matrix
 * @param mat the matrix
 * @return this vector
 */
public Vector2 mul(Matrix3 mat) {
    float x = this.x * mat.val[0] + this.y * mat.val[3] + mat.val[6];
    float y = this.x * mat.val[1] + this.y * mat.val[4] + mat.val[7];
    this.x = x;
    this.y = y;
    return this;
}
