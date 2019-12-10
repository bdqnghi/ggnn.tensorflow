public static final void mulToOut(Mat33 A, Vec3 v, Vec3 out) {
    final float tempy = v.x * A.ex.y + v.y * A.ey.y + v.z * A.ez.y;
    final float tempz = v.x * A.ex.z + v.y * A.ey.z + v.z * A.ez.z;
    out.x = v.x * A.ex.x + v.y * A.ey.x + v.z * A.ez.x;
    out.y = tempy;
    out.z = tempz;
}
