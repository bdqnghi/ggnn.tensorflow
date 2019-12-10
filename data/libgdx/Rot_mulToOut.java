public static final void mulToOut(Rot q, Vec2 v, Vec2 out) {
    float tempy = q.s * v.x + q.c * v.y;
    out.x = q.c * v.x - q.s * v.y;
    out.y = tempy;
}
