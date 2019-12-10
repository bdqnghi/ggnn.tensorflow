/**
 * Clamps this Color's components to a valid range [0 - 1]
 * @return this Color for chaining
 */
public Color clamp() {
    if (r < 0)
        r = 0;
    else if (r > 1)
        r = 1;
    if (g < 0)
        g = 0;
    else if (g > 1)
        g = 1;
    if (b < 0)
        b = 0;
    else if (b > 1)
        b = 1;
    if (a < 0)
        a = 0;
    else if (a > 1)
        a = 1;
    return this;
}
