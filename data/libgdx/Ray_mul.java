/**
 * Multiplies the ray by the given matrix. Use this to transform a ray into another coordinate system.
 *
 * @param matrix The matrix
 * @return This ray for chaining.
 */
public Ray mul(Matrix4 matrix) {
    tmp.set(origin).add(direction);
    tmp.mul(matrix);
    origin.mul(matrix);
    direction.set(tmp.sub(origin));
    return this;
}
