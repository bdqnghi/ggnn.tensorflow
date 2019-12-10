/**
 * Calculates the derivative of the catmullrom spline for the given span (i) at the given position (u).
 * @param out The Vector to set to the result.
 * @param i The span (0<=i<spanCount) spanCount = continuous ? points.length : points.length - degree
 * @param u The position (0<=u<=1) on the span
 * @param points The control points
 * @param continuous If true the b-spline restarts at 0 when reaching 1
 * @param tmp A temporary vector used for the calculation
 * @return The value of out
 */
public static <T extends Vector<T>> T derivative(final T out, final int i, final float u, final T[] points, final boolean continuous, final T tmp) {
    /*
		 * catmull'(u) = 0.5 *((-p0 + p2) + 2 * (2*p0 - 5*p1 + 4*p2 - p3) * u + 3 * (-p0 + 3*p1 - 3*p2 + p3) * u * u)
		 */
    final int n = points.length;
    final float u2 = u * u;
    // final float u3 = u2 * u;
    out.set(points[i]).scl(-u * 5 + u2 * 4.5f);
    if (continuous || i > 0)
        out.add(tmp.set(points[(n + i - 1) % n]).scl(-0.5f + u * 2 - u2 * 1.5f));
    if (continuous || i < (n - 1))
        out.add(tmp.set(points[(i + 1) % n]).scl(0.5f + u * 4 - u2 * 4.5f));
    if (continuous || i < (n - 2))
        out.add(tmp.set(points[(i + 2) % n]).scl(-u + u2 * 1.5f));
    return out;
}
