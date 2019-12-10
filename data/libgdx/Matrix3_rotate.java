/**
 * Postmultiplies this matrix with a (counter-clockwise) rotation matrix. Postmultiplication is also used by OpenGL ES' 1.x
 * glTranslate/glRotate/glScale.
 * @param degrees The angle in degrees
 * @return This matrix for the purpose of chaining.
 */
public Matrix3 rotate(float degrees) {
    return rotateRad(MathUtils.degreesToRadians * degrees);
}
