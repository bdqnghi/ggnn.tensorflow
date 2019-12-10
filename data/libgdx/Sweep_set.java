public final Sweep set(Sweep other) {
    localCenter.set(other.localCenter);
    c0.set(other.c0);
    c.set(other.c);
    a0 = other.a0;
    a = other.a;
    alpha0 = other.alpha0;
    return this;
}
