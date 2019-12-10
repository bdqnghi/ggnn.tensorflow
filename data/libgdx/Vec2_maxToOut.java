public final static void maxToOut(Vec2 a, Vec2 b, Vec2 out) {
    out.x = a.x > b.x ? a.x : b.x;
    out.y = a.y > b.y ? a.y : b.y;
}
