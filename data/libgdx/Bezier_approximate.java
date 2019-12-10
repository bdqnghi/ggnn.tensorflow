@Override
public float approximate(final T v) {
    // TODO: make a real approximate method
    T p1 = points.get(0);
    T p2 = points.get(points.size - 1);
    T p3 = v;
    float l1Sqr = p1.dst2(p2);
    float l2Sqr = p3.dst2(p2);
    float l3Sqr = p3.dst2(p1);
    float l1 = (float) Math.sqrt(l1Sqr);
    float s = (l2Sqr + l1Sqr - l3Sqr) / (2 * l1);
    return MathUtils.clamp((l1 - s) / l1, 0f, 1f);
}
