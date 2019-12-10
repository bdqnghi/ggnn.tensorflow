/**
 * Sets this matrix to an orthographic projection matrix with the origin at (x,y) extending by width and height, having a near
 * and far plane.
 *
 * @param x The x-coordinate of the origin
 * @param y The y-coordinate of the origin
 * @param width The width
 * @param height The height
 * @param near The near plane
 * @param far The far plane
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setToOrtho2D(float x, float y, float width, float height, float near, float far) {
    setToOrtho(x, x + width, y, y + height, near, far);
    return this;
}
