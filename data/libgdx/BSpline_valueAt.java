/**
 * @return The value of the spline at position u of the specified span
 */
public T valueAt(final T out, final int span, final float u) {
    return calculate(out, continuous ? span : (span + (int) (degree * 0.5f)), u, controlPoints, degree, continuous, tmp);
}
