/**
 * @param x The x-component of the other vector
 * @param y The y-component of the other vector
 * @return the squared distance between this and the other vector
 */
public float dst2(float x, float y) {
    final float x_d = x - this.x;
    final float y_d = y - this.y;
    return x_d * x_d + y_d * y_d;
}
