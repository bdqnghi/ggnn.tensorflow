/**
 * Cubic Bezier curve
 * @param out The {@link Vector} to set to the result.
 * @param t The location (ranging 0..1) on the curve.
 * @param p0 The first bezier point.
 * @param p1 The second bezier point.
 * @param p2 The third bezier point.
 * @param p3 The fourth bezier point.
 * @param tmp A temporary vector to be used by the calculation.
 * @return The value specified by out for chaining
 */
public static <T extends Vector<T>> T cubic(final T out, final float t, final T p0, final T p1, final T p2, final T p3, final T tmp) {
    // B3(t) = (1-t) * (1-t) * (1-t) * p0 + 3 * (1-t) * (1-t) * t * p1 + 3 * (1-t) * t * t * p2 + t * t * t * p3
    final float dt = 1f - t;
    final float dt2 = dt * dt;
    final float t2 = t * t;
    return out.set(p0).scl(dt2 * dt).add(tmp.set(p1).scl(3 * dt2 * t)).add(tmp.set(p2).scl(3 * dt * t2)).add(tmp.set(p3).scl(t2 * t));
}
