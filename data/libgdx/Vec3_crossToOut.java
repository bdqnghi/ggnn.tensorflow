public final static void crossToOut(Vec3 a, Vec3 b, Vec3 out) {
    final float tempy = a.z * b.x - a.x * b.z;
    final float tempz = a.x * b.y - a.y * b.x;
    out.x = a.y * b.z - a.z * b.y;
    out.y = tempy;
    out.z = tempz;
}
