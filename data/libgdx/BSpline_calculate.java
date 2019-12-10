/**
 * Calculates the n-degree b-spline value for the given span (i) at the given position (u).
 * @param out The Vector to set to the result.
 * @param i The span (0<=i<spanCount) spanCount = continuous ? points.length : points.length - degree
 * @param u The position (0<=u<=1) on the span
 * @param points The control points
 * @param degree The degree of the b-spline
 * @param continuous If true the b-spline restarts at 0 when reaching 1
 * @param tmp A temporary vector used for the calculation
 * @return The value of out
 */
public static <T extends Vector<T>> T calculate(final T out, final int i, final float u, final T[] points, final int degree, final boolean continuous, final T tmp) {
    switch(degree) {
        case 3:
            return cubic(out, i, u, points, continuous, tmp);
    }
    return out;
}
