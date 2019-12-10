/**
 * Sets the matrix to a rotation matrix around the given axis.
 *
 * @param axisX The x-component of the axis
 * @param axisY The y-component of the axis
 * @param axisZ The z-component of the axis
 * @param radians The angle in radians
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 setToRotationRad(float axisX, float axisY, float axisZ, float radians) {
    if (radians == 0) {
        idt();
        return this;
    }
    return set(quat.setFromAxisRad(axisX, axisY, axisZ, radians));
}
