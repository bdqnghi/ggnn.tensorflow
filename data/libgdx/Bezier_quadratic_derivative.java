/**
 * Quadratic Bezier curve derivative
 * @param out The {@link Vector} to set to the result.
 * @param t The location (ranging 0..1) on the curve.
 * @param p0 The first bezier point.
 * @param p1 The second bezier point.
 * @param p2 The third bezier point.
 * @param tmp A temporary vector to be used by the calculation.
 * @return The value specified by out for chaining
 */
public static <T extends Vector<T>> T quadratic_derivative(final T out, final float t, final T p0, final T p1, final T p2, final T tmp) {
    // B2'(t) = 2 * (1 - t) * (p1 - p0) + 2 * t * (p2 - p1)
    final float dt = 1f - t;
    return out.set(p1).sub(p0).scl(2).scl(1 - t).add(tmp.set(p2).sub(p1).scl(t).scl(2));
}
