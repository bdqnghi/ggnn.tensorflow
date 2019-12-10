public final Mat22 mulTransLocal(final Mat22 B) {
    mulTransToOut(B, this);
    return this;
}
