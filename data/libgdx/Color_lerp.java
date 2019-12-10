/**
 * Linearly interpolates between this color and the target color by t which is in the range [0,1]. The result is stored in
 * this color.
 * @param r The red component of the target color
 * @param g The green component of the target color
 * @param b The blue component of the target color
 * @param a The alpha component of the target color
 * @param t The interpolation coefficient
 * @return This color for chaining.
 */
public Color lerp(final float r, final float g, final float b, final float a, final float t) {
    this.r += t * (r - this.r);
    this.g += t * (g - this.g);
    this.b += t * (b - this.b);
    this.a += t * (a - this.a);
    return clamp();
}
