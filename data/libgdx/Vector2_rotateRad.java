/**
 * Rotates the Vector2 by the given angle, counter-clockwise assuming the y-axis points up.
 * @param radians the angle in radians
 */
public Vector2 rotateRad(float radians) {
    float cos = (float) Math.cos(radians);
    float sin = (float) Math.sin(radians);
    float newX = this.x * cos - this.y * sin;
    float newY = this.x * sin + this.y * cos;
    this.x = newX;
    this.y = newY;
    return this;
}
