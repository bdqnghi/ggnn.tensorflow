public final static void crossToOutUnsafe(float s, Vec2 a, Vec2 out) {
    assert (out != a);
    out.x = -s * a.y;
    out.y = s * a.x;
}
