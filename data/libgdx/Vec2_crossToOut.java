public final static void crossToOut(float s, Vec2 a, Vec2 out) {
    final float tempY = s * a.x;
    out.x = -s * a.y;
    out.y = tempY;
}
