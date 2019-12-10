public final static void crossToOutUnsafe(Vec3 a, Vec3 b, Vec3 out) {
    assert (out != b);
    assert (out != a);
    out.x = a.y * b.z - a.z * b.y;
    out.y = a.z * b.x - a.x * b.z;
    out.z = a.x * b.y - a.y * b.x;
}
