/**
 * Multiplies this quaternion with another one in the form of this = other * this
 *
 * @param x the x component of the other quaternion to multiply with
 * @param y the y component of the other quaternion to multiply with
 * @param z the z component of the other quaternion to multiply with
 * @param w the w component of the other quaternion to multiply with
 * @return This quaternion for chaining
 */
public Quaternion mulLeft(final float x, final float y, final float z, final float w) {
    final float newX = w * this.x + x * this.w + y * this.z - z * y;
    final float newY = w * this.y + y * this.w + z * this.x - x * z;
    final float newZ = w * this.z + z * this.w + x * this.y - y * x;
    final float newW = w * this.w - x * this.x - y * this.y - z * z;
    this.x = newX;
    this.y = newY;
    this.z = newZ;
    this.w = newW;
    return this;
}
