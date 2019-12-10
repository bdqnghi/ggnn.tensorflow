/**
 * Rotates the Vector2 by the given angle, counter-clockwise assuming the y-axis points up.
 * @param degrees the angle in degrees
 */
public Vector2 rotate(float degrees) {
    return rotateRad(degrees * MathUtils.degreesToRadians);
}
