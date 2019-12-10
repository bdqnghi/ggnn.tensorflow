/**
 * Add the x,y,z,w components of the passed in quaternion to the ones of this quaternion
 */
public Quaternion add(float qx, float qy, float qz, float qw) {
    this.x += qx;
    this.y += qy;
    this.z += qz;
    this.w += qw;
    return this;
}
