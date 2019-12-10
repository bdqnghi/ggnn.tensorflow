/**
 * Solve A * x = b, where b is a column vector. This is more efficient than computing the inverse
 * in one-shot cases.
 *
 * @param b
 * @param out the result
 */
public final void solve33ToOut(Vec3 b, Vec3 out) {
    assert (b != out);
    Vec3.crossToOutUnsafe(ey, ez, out);
    float det = Vec3.dot(ex, out);
    if (det != 0.0f) {
        det = 1.0f / det;
    }
    Vec3.crossToOutUnsafe(ey, ez, out);
    final float x = det * Vec3.dot(b, out);
    Vec3.crossToOutUnsafe(b, ez, out);
    final float y = det * Vec3.dot(ex, out);
    Vec3.crossToOutUnsafe(ey, b, out);
    float z = det * Vec3.dot(ex, out);
    out.x = x;
    out.y = y;
    out.z = z;
}
