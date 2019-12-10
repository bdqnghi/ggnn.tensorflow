public final void normalize() {
    float d = MathUtils.TWOPI * MathUtils.floor(a0 / MathUtils.TWOPI);
    a0 -= d;
    a -= d;
}
