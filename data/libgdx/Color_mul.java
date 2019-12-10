/**
 * Multiplies this Color's color components by the given ones.
 *
 * @param r Red component
 * @param g Green component
 * @param b Blue component
 * @param a Alpha component
 *
 * @return this Color for chaining
 */
public Color mul(float r, float g, float b, float a) {
    this.r *= r;
    this.g *= g;
    this.b *= b;
    this.a *= a;
    return clamp();
}
