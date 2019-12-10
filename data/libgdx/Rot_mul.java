public static final void mul(Rot q, Rot r, Rot out) {
    float tempc = q.c * r.c - q.s * r.s;
    out.s = q.s * r.c + q.c * r.s;
    out.c = tempc;
}
