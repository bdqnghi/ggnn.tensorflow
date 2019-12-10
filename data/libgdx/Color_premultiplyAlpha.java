/**
 * Multiplies the RGB values by the alpha.
 */
public Color premultiplyAlpha() {
    r *= a;
    g *= a;
    b *= a;
    return this;
}
