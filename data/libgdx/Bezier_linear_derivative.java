/**
 * Simple linear interpolation derivative
 * @param out The {@link Vector} to set to the result.
 * @param t The location (ranging 0..1) on the line.
 * @param p0 The start point.
 * @param p1 The end point.
 * @param tmp A temporary vector to be used by the calculation.
 * @return The value specified by out for chaining
 */
public static <T extends Vector<T>> T linear_derivative(final T out, final float t, final T p0, final T p1, final T tmp) {
    // B1'(t) = p1-p0
    return out.set(p1).sub(p0);
}
