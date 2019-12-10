/**
 * Postmultiplies the current transformation with the given matrix.
 */
public void mul(Matrix4 transform) {
    this.transform.mul(transform);
    this.transform.getScale(scale);
}
