/**
 * Calculates the cubic b-spline derivative for the given span (i) at the given position (u).
 * @param out The Vector to set to the result.
 * @param i The span (0<=i<spanCount) spanCount = continuous ? points.length : points.length - 3 (cubic degree)
 * @param u The position (0<=u<=1) on the span
 * @param points The control points
 * @param continuous If true the b-spline restarts at 0 when reaching 1
 * @param tmp A temporary vector used for the calculation
 * @return The value of out
 */
public static <T extends Vector<T>> T cubic_derivative(final T out, final int i, final float u, final T[] points, final boolean continuous, final T tmp) {
    final int n = points.length;
    final float dt = 1f - u;
    final float t2 = u * u;
    final float t3 = t2 * u;
    out.set(points[i]).scl(1.5f * t2 - 2 * u);
    if (continuous || i > 0)
        out.add(tmp.set(points[(n + i - 1) % n]).scl(0.5f * (1 - u) * (1 - u)));
    if (continuous || i < (n - 1))
        out.add(tmp.set(points[(i + 1) % n]).scl(-1.5f * t2 + u + 0.5f));
    if (continuous || i < (n - 2))
        out.add(tmp.set(points[(i + 2) % n]).scl(0.5f * t2));
    return out;
}
