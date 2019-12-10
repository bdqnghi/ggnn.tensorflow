/**
 * Transform the position, direction and up vector by the given matrix
 *
 * @param transform The transform matrix
 */
public void transform(final Matrix4 transform) {
    position.mul(transform);
    rotate(transform);
}
