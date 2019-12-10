/**
 * Postmultiplies this matrix with a (counter-clockwise) rotation matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale
 * @param axisX The x-axis component of the vector to rotate around.
 * @param axisY The y-axis component of the vector to rotate around.
 * @param axisZ The z-axis component of the vector to rotate around.
 * @param radians The angle in radians
 * @return This matrix for the purpose of chaining methods together.
 */
public Matrix4 rotateRad(float axisX, float axisY, float axisZ, float radians) {
    if (radians == 0)
        return this;
    quat.setFromAxisRad(axisX, axisY, axisZ, radians);
    return rotate(quat);
}
