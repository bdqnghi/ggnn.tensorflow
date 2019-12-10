/**
 * Sets the current transformation.
 */
public void setTransform(float x, float y, float z, float qx, float qy, float qz, float qw, float scale) {
    transform.set(x, y, z, qx, qy, qz, qw, scale, scale, scale);
    this.scale.set(scale, scale, scale);
}
