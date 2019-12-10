// djm pooling from below
/**
 * Solve A * x = b, where b is a column vector. This is more efficient than computing the inverse
 * in one-shot cases.
 *
 * @param b
 * @return
 */
public final Vec3 solve33(Vec3 b) {
    Vec3 x = new Vec3();
    solve33ToOut(b, x);
    return x;
}
