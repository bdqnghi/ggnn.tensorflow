/**
 * Returns the lowest positive root of the quadric equation given by a* x * x + b * x + c = 0. If no solution is given
 * Float.Nan is returned.
 * @param a the first coefficient of the quadric equation
 * @param b the second coefficient of the quadric equation
 * @param c the third coefficient of the quadric equation
 * @return the lowest positive root or Float.Nan
 */
static public float lowestPositiveRoot(float a, float b, float c) {
    float det = b * b - 4 * a * c;
    if (det < 0)
        return Float.NaN;
    float sqrtD = (float) Math.sqrt(det);
    float invA = 1 / (2 * a);
    float r1 = (-b - sqrtD) * invA;
    float r2 = (-b + sqrtD) * invA;
    if (r1 > r2) {
        float tmp = r2;
        r2 = r1;
        r1 = tmp;
    }
    if (r1 > 0)
        return r1;
    if (r2 > 0)
        return r2;
    return Float.NaN;
}
