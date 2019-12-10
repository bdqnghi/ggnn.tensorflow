public static final void mulUnsafe(Rot q, Rot r, Rot out) {
    assert (r != out);
    assert (q != out);
    // [qc -qs] * [rc -rs] = [qc*rc-qs*rs -qc*rs-qs*rc]
    // [qs qc] [rs rc] [qs*rc+qc*rs -qs*rs+qc*rc]
    // s = qs * rc + qc * rs
    // c = qc * rc - qs * rs
    out.s = q.s * r.c + q.c * r.s;
    out.c = q.c * r.c - q.s * r.s;
}
