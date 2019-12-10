// TODO implement Serializable
/**
 * Simple linear interpolation
 * @param out The {@link Vector} to set to the result.
 * @param t The location (ranging 0..1) on the line.
 * @param p0 The start point.
 * @param p1 The end point.
 * @param tmp A temporary vector to be used by the calculation.
 * @return The value specified by out for chaining
 */
public static <T extends Vector<T>> T linear(final T out, final float t, final T p0, final T p1, final T tmp) {
    // Could just use lerp...
    return out.set(p0).scl(1f - t).add(tmp.set(p1).scl(t));
}
