public static final void mulTransUnsafe(Rot q, Vec2 v, Vec2 out) {
    out.x = q.c * v.x + q.s * v.y;
    out.y = -q.s * v.x + q.c * v.y;
}
