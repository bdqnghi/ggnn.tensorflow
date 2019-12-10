@Override
public T derivativeAt(final T out, final float t) {
    final int n = points.size;
    if (n == 2)
        linear_derivative(out, t, points.get(0), points.get(1), tmp);
    else if (n == 3)
        quadratic_derivative(out, t, points.get(0), points.get(1), points.get(2), tmp);
    else if (n == 4)
        cubic_derivative(out, t, points.get(0), points.get(1), points.get(2), points.get(3), tmp);
    return out;
}
