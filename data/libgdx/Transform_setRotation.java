/**
 * Sets the rotation of this transform
 * @param angle angle in radians
 */
public void setRotation(float angle) {
    float c = (float) Math.cos(angle), s = (float) Math.sin(angle);
    vals[COS] = c;
    vals[SIN] = s;
}
