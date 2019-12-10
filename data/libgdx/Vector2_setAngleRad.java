/**
 * Sets the angle of the vector in radians relative to the x-axis, towards the positive y-axis (typically counter-clockwise).
 * @param radians The angle in radians to set.
 */
public Vector2 setAngleRad(float radians) {
    this.set(len(), 0f);
    this.rotateRad(radians);
    return this;
}
