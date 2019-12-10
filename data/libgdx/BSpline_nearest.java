/**
 * @return The span closest to the specified value, restricting to the specified spans.
 */
public int nearest(final T in, int start, final int count) {
    while (start < 0) start += spanCount;
    int result = start % spanCount;
    float dst = in.dst2(knots.get(result));
    for (int i = 1; i < count; i++) {
        final int idx = (start + i) % spanCount;
        final float d = in.dst2(knots.get(idx));
        if (d < dst) {
            dst = d;
            result = idx;
        }
    }
    return result;
}
