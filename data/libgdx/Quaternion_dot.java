/**
 * Get the dot product between this and the other quaternion (commutative).
 * @param x the x component of the other quaternion
 * @param y the y component of the other quaternion
 * @param z the z component of the other quaternion
 * @param w the w component of the other quaternion
 * @return the dot product of this and the other quaternion.
 */
public float dot(final float x, final float y, final float z, final float w) {
    return this.x * x + this.y * y + this.z * z + this.w * w;
}
