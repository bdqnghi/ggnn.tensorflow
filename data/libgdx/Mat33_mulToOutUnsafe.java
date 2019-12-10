public static final void mulToOutUnsafe(Mat33 A, Vec3 v, Vec3 out) {
    assert (out != v);
    out.x = v.x * A.ex.x + v.y * A.ey.x + v.z * A.ez.x;
    out.y = v.x * A.ex.y + v.y * A.ey.y + v.z * A.ez.y;
    out.z = v.x * A.ex.z + v.y * A.ey.z + v.z * A.ez.z;
}
