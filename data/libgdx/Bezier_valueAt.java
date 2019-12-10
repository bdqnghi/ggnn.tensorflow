@Override
public T valueAt(final T out, final float t) {
    final int n = points.size;
    if (n == 2)
        linear(out, t, points.get(0), points.get(1), tmp);
    else if (n == 3)
        quadratic(out, t, points.get(0), points.get(1), points.get(2), tmp);
    else if (n == 4)
        cubic(out, t, points.get(0), points.get(1), points.get(2), points.get(3), tmp);
    return out;
}
