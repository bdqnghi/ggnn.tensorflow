/**
 * Advance the sweep forward, yielding a new initial state.
 *
 * @param alpha the new initial time.
 */
public final void advance(final float alpha) {
    assert (alpha0 < 1.0f);
    // float32 beta = (alpha - alpha0) / (1.0f - alpha0);
    // c0 += beta * (c - c0);
    // a0 += beta * (a - a0);
    // alpha0 = alpha;
    float beta = (alpha - alpha0) / (1.0f - alpha0);
    c0.x += beta * (c.x - c0.x);
    c0.y += beta * (c.y - c0.y);
    a0 += beta * (a - a0);
    alpha0 = alpha;
}
