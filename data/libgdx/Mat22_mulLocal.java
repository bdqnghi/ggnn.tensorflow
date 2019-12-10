public final Mat22 mulLocal(final Mat22 R) {
    mulToOut(R, this);
    return this;
}
