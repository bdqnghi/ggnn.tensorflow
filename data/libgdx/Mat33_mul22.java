public static final Vec2 mul22(Mat33 A, Vec2 v) {
    return new Vec2(A.ex.x * v.x + A.ey.x * v.y, A.ex.y * v.x + A.ey.y * v.y);
}
