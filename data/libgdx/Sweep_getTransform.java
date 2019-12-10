/**
 * Get the interpolated transform at a specific time.
 *
 * @param xf the result is placed here - must not be null
 * @param t the normalized time in [0,1].
 */
public final void getTransform(final Transform xf, final float beta) {
    assert (xf != null);
    // xf->p = (1.0f - beta) * c0 + beta * c;
    // float32 angle = (1.0f - beta) * a0 + beta * a;
    // xf->q.Set(angle);
    xf.p.x = (1.0f - beta) * c0.x + beta * c.x;
    xf.p.y = (1.0f - beta) * c0.y + beta * c.y;
    float angle = (1.0f - beta) * a0 + beta * a;
    xf.q.set(angle);
    // Shift to origin
    // xf->p -= b2Mul(xf->q, localCenter);
    final Rot q = xf.q;
    xf.p.x -= q.c * localCenter.x - q.s * localCenter.y;
    xf.p.y -= q.s * localCenter.x + q.c * localCenter.y;
}
