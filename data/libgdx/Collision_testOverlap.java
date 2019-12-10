/**
 * Determine if two generic shapes overlap.
 *
 * @param shapeA
 * @param shapeB
 * @param xfA
 * @param xfB
 * @return
 */
public final boolean testOverlap(Shape shapeA, int indexA, Shape shapeB, int indexB, Transform xfA, Transform xfB) {
    input.proxyA.set(shapeA, indexA);
    input.proxyB.set(shapeB, indexB);
    input.transformA.set(xfA);
    input.transformB.set(xfB);
    input.useRadii = true;
    cache.count = 0;
    pool.getDistance().distance(output, cache, input);
    // djm note: anything significant about 10.0f?
    return output.distance < 10.0f * Settings.EPSILON;
}
