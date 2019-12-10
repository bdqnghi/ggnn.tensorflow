/**
 * Get the current joint angle in radians.
 */
public float getJointAngle() {
    return jniGetJointAngle(addr);
}
