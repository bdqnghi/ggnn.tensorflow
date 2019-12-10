/**
 * @return the distance between this point and the given point
 */
public float dst(float x, float y, float z) {
    final float a = x - this.x;
    final float b = y - this.y;
    final float c = z - this.z;
    return (float) Math.sqrt(a * a + b * b + c * c);
}
