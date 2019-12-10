/**
 * @param x The x-component of the other vector
 * @param y The y-component of the other vector
 * @return the distance between this and the other vector
 */
public float dst(float x, float y) {
    final float x_d = x - this.x;
    final float y_d = y - this.y;
    return (float) Math.sqrt(x_d * x_d + y_d * y_d);
}
