public float approximate(final T in, final int near) {
    int n = near;
    final T nearest = controlPoints[n];
    final T previous = controlPoints[n > 0 ? n - 1 : spanCount - 1];
    final T next = controlPoints[(n + 1) % spanCount];
    final float dstPrev2 = in.dst2(previous);
    final float dstNext2 = in.dst2(next);
    T P1, P2, P3;
    if (dstNext2 < dstPrev2) {
        P1 = nearest;
        P2 = next;
        P3 = in;
    } else {
        P1 = previous;
        P2 = nearest;
        P3 = in;
        n = n > 0 ? n - 1 : spanCount - 1;
    }
    float L1Sqr = P1.dst2(P2);
    float L2Sqr = P3.dst2(P2);
    float L3Sqr = P3.dst2(P1);
    float L1 = (float) Math.sqrt(L1Sqr);
    float s = (L2Sqr + L1Sqr - L3Sqr) / (2f * L1);
    float u = MathUtils.clamp((L1 - s) / L1, 0f, 1f);
    return (n + u) / spanCount;
}
