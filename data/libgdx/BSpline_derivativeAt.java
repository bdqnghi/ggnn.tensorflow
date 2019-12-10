/**
 * @return The derivative of the spline at position u of the specified span
 */
public T derivativeAt(final T out, final int span, final float u) {
    return derivative(out, continuous ? span : (span + (int) (degree * 0.5f)), u, controlPoints, degree, continuous, tmp);
}
