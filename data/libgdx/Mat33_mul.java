// / Multiply a matrix times a vector.
public static final Vec3 mul(Mat33 A, Vec3 v) {
    return new Vec3(v.x * A.ex.x + v.y * A.ey.x + v.z + A.ez.x, v.x * A.ex.y + v.y * A.ey.y + v.z * A.ez.y, v.x * A.ex.z + v.y * A.ey.z + v.z * A.ez.z);
}
