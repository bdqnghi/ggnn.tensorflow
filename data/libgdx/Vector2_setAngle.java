/**
 * Sets the angle of the vector in degrees relative to the x-axis, towards the positive y-axis (typically counter-clockwise).
 * @param degrees The angle in degrees to set.
 */
public Vector2 setAngle(float degrees) {
    return setAngleRad(degrees * MathUtils.degreesToRadians);
}
